/*  xkbtimer.c -- Manage XKB timers.

    Copyright (C) 2003  Marco Gerards
   
    Written by Marco Gerards <marco@student.han.nl>
    
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.  */

/* XKB requires a timer for key repeat and accessibility. Carefully
   stack all compatibility features.  */

#include <mach.h>
#include <errno.h>
#include <assert.h>

#include "xkb.h"
#include "timer.h"

/* Lock the access to handle_key.  */
static struct mutex *lock_key;


/* For key repeat.  */
static struct timer_list repeat;
static int repeating = 0;
static int repeating_keycode = 0;
static int key_delay = 0;
static int key_repeat = 0;

/* SlowKeys.  */
static struct timer_list slowkeys;
static int slowkeys_delay = 100;
static int slowkeys_accepted = 0;
static int slowkeys_waiting = 0;
static int slowkeys_lastkey = 0;

static enum
  {
    timer_stopped,
    timer_slowkeys,
    timer_repeat_delay,
    timer_repeating
  } timer_status = timer_stopped;

error_t
xkb_handle_key (int key)
{
  printf ("-Key: %d\n", key);
  return 0;
}

error_t
xkb_init_repeat (int delay, int repeat)
{
  error_t err;
  err = timer_init ();
  if (err)
    return err;

  key_delay = delay;
  key_repeat = repeat;
  
  return 0;
}

static int
repeat_key (void *handle)
{
  xkb_handle_key (slowkeys_lastkey);
  switch (timer_status)
    {
    case timer_stopped:
      assert ("Stopped timer triggered timer event\n");
      break;
    case timer_slowkeys:
      repeat.expires = fetch_jiffies () + key_delay;
      break;
    case timer_repeat_delay:
    case timer_repeating:
      repeat.expires = fetch_jiffies () + key_repeat;
      break;
    }
  return 1;
}

static int
slowkeys_expired (void *handle)
{
  printf ("slowkeys accepted\n");
  slowkeys_accepted = 1;
  slowkeys_waiting = 0;
  xkb_input_key (slowkeys_lastkey);
  return 0;
}

error_t
xkb_input_key (int key)
{
  int keyc = key & 127;
  int pressed = !(key & 128);

  /* Filter out any double keys.  */
  if (key == slowkeys_lastkey)
    return 0;

  /* The keyevent cancels the timer.  */
  timer_remove (&repeat);
  timer_status = timer_stopped;

  /* Always handle keyrelease events.  */
  if (!pressed)
    {
      /* XXX: make sure the key was pressed before releasing it, it
	 might not have been accepted.  */
      xkb_handle_key (key);
      return 0;
    }

  /* Setup the timer for slowkeys.  */
  timer_clear (&repeat);
  slowkeys_lastkey = key;
  repeat.fnc = repeat_key;
  repeat.expires = slowkeys_delay;
  timer_status = timer_slowkeys;
  timer_add (&repeat);
  
  return 0;
}

error_t
xkb_input_key2 (int key)
{
  int keyc = key & 127;
  int pressed = !(key & 128);

  if (pressed)
    printf ("Key pressed: %d\n", keyc);
  else 
    printf ("Key released: %d\n", keyc);

  /* Check if the user pressed another key or released the key while
     waiting for the slowkey to get accepted.  */
  if (((pressed && keyc != slowkeys_lastkey) || !pressed))
    {
      if (slowkeys_waiting)
	timer_remove (&slowkeys);
      printf ("slowkeys stop\n");

      slowkeys_waiting = 0;
      slowkeys_accepted = 0;

      /* The keypress was never reported so don't report the release.  */
      if (!pressed)
	return 0;
    }
  /* A key was pressed, but slowkeys doesn't accept the key yet.  */
  if (pressed && !slowkeys_accepted)
    {
      if (!slowkeys_waiting)
	{
	  timer_clear (&slowkeys);
	  slowkeys_lastkey = key;
	  slowkeys.fnc = slowkeys_expired;
	  slowkeys.expires = slowkeys_delay;
	  timer_add (&slowkeys);
	  slowkeys_waiting = 1;
	  printf ("slowkeys, timer started\n");
	}
      printf ("Not accepted yet\n");
      return 0;
    }

  if (pressed)
    {
      printf ("PRESS\n");
      /* If a key is repeating and another key is pressed, repeat the new
	 key.  */
      if (!repeating)
	{
	  printf ("rep1\n");
	  timer_clear (&repeat);
	  repeating_keycode = keyc;
	  repeat.fnc = repeat_key;
	  repeat.expires = fetch_jiffies () + key_delay;
	  printf ("adding repeat\n");
	  timer_add (&repeat);
	  printf ("set time new\n");
	  repeating = 1;
	}
      else if (repeating_keycode != keyc)
	{
	  printf ("rep2\n");
	  repeating_keycode = keyc;
	  timer_change (&repeat, fetch_jiffies () + key_delay);
	  printf ("refreshed\n");
	}
      else
	{
	  printf ("FOO!\n");
	}
    }
  else if (repeating_keycode == keyc) /* Key released  */
    {
      timer_remove (&repeat);
      printf ("repeat stopped\n");
      repeating = 0;
    }
  
  printf ("Input\n");
  xkb_handle_key (key);

  return 0;
}
