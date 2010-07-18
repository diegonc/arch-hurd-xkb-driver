/*  kbd_driver.h -- Interfaces for low level keyboard drivers.

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

typedef int keycode;
typedef int scancode;

/* Enable LEDs. The driver must support 32 LEDs. If those LEDs aren't
   supported by hardware  the driver must ignore those LEDs. 
   
   The LEDs have the same meaning on all hardware. The setleds
   function should ajust the order of the bits.
*/ 
void
kbd_setleds (int led);

/* Read the current state of the keyboard LEDs. The returned integer
   is hardware independant. */
int
kbd_readleds (int led);

/* Register the a routine that has to be called whenever the status of
   the LEDs change. XXX: I'm not sure if this function is sane. XKB
   devines some functionality that can handle this event. Is there
   some hardware that can set the indicators itself?  */
void
kbd_leds_changed (void (*lc)(void));

/* Set the keyboard delay and interval. These values may not be
   ignored because they are not supported by the hardware. Instead of
   that the closest supported value should be used. Both parameters are
   in milliseconds.  */

void
kbd_repeat (int delay, int interval);

/* Enable (1) or disable(0) autorepeat for the entire keyboard.  */
void
kbd_set_repeat (int onoff);

/* Enable (1) or disable(0) autorepeat for a single key.  */
void
kbd_key_set_repeat (int onoff);

/* XXX: The following functions are only usefull when the driver returns
   scancodes. If keycodes are returned instead these functions should
   be reconsidered.  */

/* Configure the hardware to return scancodes in a specific set. The
   function returns the actual set that is used.  When the set cannot
   be changed the return value will not be equal to the selected set.
   */
int
kbd_set_scset (int set);

/* Return the current used scancode set.  */
int
kbd_get_scset (int set);

/* Read a single scancode from the keyboard buffer.  */
scancode
kbd_read_scancode (void);

#define KBD_DETECTED	1
#define KDB_NDETECTED	2 
#define KBD_UNKNOWN	3

/* Detect if the keyboard is detected and working.  Return
   KBD_DETECTED when the keyboard is connected, return KBD_NCONNECTED
   when it isn't. Return KBD_UNKNOWN when the status is unknown.  */
int
kbd_detected (void);

int kbd_init (void);

int kbd_close (void);

keycode
kbd_read_keycode (void);
