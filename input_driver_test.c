/*  input_driver_test.c -- Program to test input drivers.

    Copyright (C) 2003  Marco Gerards
   
    Written by Marco Gerards <metgerards@student.han.nl>
    
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.  

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "driver.h"
#include "kbd_driver.h"

driver_ops_t ops;
void *input_driver;


/* Add the input source HANDLE with the operations OPS to the console
   client.  As soon as this is called, operations on this input source
   may be performed, even before the function returns.  */
error_t driver_add_input (input_ops_t ops, void *handle)
{
  return 0;
}

/* Remove the input HANDLE with the operations OPS from the console
   client.  As soon as this function returns, no operations will be
   performed on the input source anymore.  */
error_t driver_remove_input (input_ops_t ops, void *handle)
{
  return 0;
}

/* Enter SIZE bytes from the buffer BUF into the currently active
   console.  This can be called by the input driver at any time.  */
error_t console_input (char *buf, size_t size)
{
  int i;
  printf ("Input: ");
  for (i = 0; i < size; i++)
    printf ("'%c'(%d)", (unsigned char) buf[i], (unsigned char) buf[i]);
  printf ("\n");
  return 0;
}

/* Scroll the active console by TYPE and VALUE as specified by
   cons_vcons_scrollback.  */
int console_scrollback (cons_scroll_t type, float value)
{
  printf ("Scrollback: type: %d, amount: %f\n", type, value);
  return 0;
}

/* Switch the active console to console ID or DELTA (relative to the
   active console).  */
error_t console_switch (int id, int delta)
{
  printf ("Switch to: %d, delta %d\n", id, delta);
  return 0;
}

void console_switch_back(void)
{
  puts("Switch back\n");
}

void console_switch_away(void)
{
  puts("Switch away\n");
}

/* Signal an error to the user.  */
void console_error (const wchar_t *const err_msg)
{
  printf ("Error: %s\n", (char*)err_msg);
}

//int (* kbd_drv_close)(void);

/* Exit the console client.  Does not return.  */
void console_exit (void)
{
  error_t err;
  printf ("Console exit\n");
  
  /* Deinitialize the driver.  */
  printf ("Deinitializing driver...\n");
  err = (*ops->fini) (0, 0);
  if (err)
    {
      printf ("error from fini\n");
      dlclose (input_driver);
      exit (EXIT_FAILURE);
    }
  
  printf ("Closing input driver...\n");
  dlclose (input_driver);
  printf ("Closed... exiting\n");
  exit (0);
}

int
main (int argc, char **argv)
{
  char *opsstr;
  error_t err;
  char *driver = "xkb";
  int next = 1;

  /* Open the driver.  */
  input_driver = dlopen ("/lib/hurd/console/xkb.so.0.3", RTLD_LAZY);
  if (!input_driver)
    {
      fprintf (stderr, "%s\n", dlerror ());
      exit (EXIT_FAILURE);
    }

  /* Load the symbol "kbd_close" so it can be used by console_exit.  */
/*   kbd_drv_close = dlsym (input_driver, "kbd_close"); */
/*   if (!kbd_drv_close) */
/*     { */
/*       printf ("No kbd close!\n"); */
/*       dlclose (input_driver); */
/*       exit (EXIT_FAILURE); */
/*     } */
  
  /* Find the structure used by the driver interface.  */
  if (asprintf (&opsstr, "driver_%s_ops", driver) < 0)
    {
      printf ("MEM\n");
      dlclose (input_driver);
      exit (EXIT_FAILURE);
    } 

  ops = dlsym (input_driver, opsstr);
  if (!ops)
    {
      printf ("no driver ops: '%s'\n", opsstr);
      dlclose (input_driver);
      exit (EXIT_FAILURE);
    }
  free (opsstr);
  
  /* Initialize the driver.  */
  err = (*ops->init) (0, 0, argc, argv, &next);
  if (err)
    {
      fprintf (stderr, "Error in init: %s\n", strerror (err));
      dlclose (input_driver);
      exit (EXIT_FAILURE);
    }

  /* Start the driver.  */
  err = (*ops->start) (0);
  if (err)
    {
      fprintf (stderr, "Error in start: %s\n", strerror (err));
      dlclose (input_driver);
      exit (EXIT_FAILURE);
    }
  
  //console_exit ();

  /*
 The program will be ended by the keyboard driver or by the
     console_exit call.  */
  //  thread_terminate (mach_thread_self ());
  for(;;);
  /* Never reached.  */
  return 0;
}
