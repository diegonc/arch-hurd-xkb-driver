/*  kbd_dummy.c -- A dummy keyboard driver.

    Copyright (C) 2002, 03  Marco Gerards
   
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

/* This code sucks and much of it should be rewritten so it can be
   loaded out of conf. files.  */

#include <unistd.h>
#include <stdlib.h>
#include "kbd_driver.h"
#include <stdio.h>

int kl[] = {0xE0, 0x38, 0x09};
int ii = 3;

scancode
kbd_read_scancode (void)
{
  static int num = 0;

  if (num == ii)
    exit (0);

  printf ("Read sc: %d\n", kl[num]);
  return kl[num++];
}

int
kbd_detected (void)
{
  return KBD_DETECTED;
}

/* Read a keycode using the read_scancode routine. The translation from
   scancodes is hardcoded. A configuration file should be used in the
   near future because this is an UGLY HACK.  */
keycode
kbd_read_keycode (void)
{
  scancode sc = kbd_read_scancode ();
  int release = 0;


  /* The keypress generated two keycodes.  */
  if (sc == 0xE0)
    {
      sc = kbd_read_scancode ();

      release = sc & 0x80;
      sc &= ~0x80;

      switch (sc)
	{
	case 0x1D: /* RCTRL.  */
	  sc =  101;
	  break;
	case 0x38: /* RALT.  */
	  sc =  105;
	  break;
	  /* LRGUI MENU.  */
	case 0x5B: /* LGUI.  */
	  sc = 107;
	  break;
	case 0x5C: /* RGUI.  */
	  sc = 108;
	  break;
	case 0x5D: /* MENU.  */
	  sc = 109;
	  break;
	case 0x52: /* Insert.  */
	  sc = 98;
	  break;
	case 0x47: /* Home.  */
	  sc = 89;
	  break;
	case 0x49: /* Pg Up.  */
	  sc = 91;
	  break;
	case 0x53: /* Delete.  */
	  sc = 99;
	  break;
	case 0x4F: /* End.  */
	  sc = 95;
	  break;
	case 0x51: /* Pg Down.  */
	  sc = 97;
	  break;
	case 0x48: /* Arrow up.  */
	  sc = 90;
	  break;
	case 0x50: /* Arrow down.  */
	  sc = 96;
	  break;
	case 0x4b: /* Arrow left.  */
	  sc = 92;
	  break;
	case 0x4d: /* Arrow right. */
	  sc = 94;
	  break;
	default:
	  sc += 0x78;
	}

      sc |= release;
    }
  else
    release = sc & 0x80;

  //  sc += xkminfo.min_kc;

  printf ("Read kc: %d\n", sc + 8);

  return sc + 8;
}

int
kbd_close (void)
{  
  return 0;
}

int
kbd_init (void)
{
  return 0;
}
