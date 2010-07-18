/*  kbd_mach.c -- A dummy keyboard driver.

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

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <errno.h>
#include <assert.h>
#include <string.h>
#include <iconv.h>
#include <sys/mman.h>
#include <hurd.h>

#include <device/device.h>
#include <cthreads.h>
#include <hurd/console.h>
#include <hurd/cons.h>

#include "xkb.h"

int
kbd_detected (void)
{
  return KBD_DETECTED;
}

error_t
kbd_init (void)
{
  error_t err;
  device_t device_master;
  
  err = get_privileged_ports (0, &device_master);
  if (err)
    return err;
  
  err = device_open (device_master, D_READ | D_WRITE, "@>=kbd", &kbd_dev);
  if (err == D_NO_SUCH_DEVICE)
    {
      /* GNU Mach v1 has a different device.  */
      gnumach_v1_compat = 1;
      err = device_open (device_master, D_READ, "kbd", &kbd_dev);
    }

  mach_port_deallocate (mach_task_self (), device_master);
  if (err)
      return err;

  if (gnumach_v1_compat)
    {
      int data = KB_EVENT;
      err = device_set_status (kbd_dev, KDSKBDMODE, &data, 1);
      if (err)
	{
	  device_close (kbd_dev);
	  mach_port_deallocate (mach_task_self (), kbd_dev);
	  return err;
	}
    }

  return err; 
}

error_t
kbd_close (void)
{
  if (gnumach_v1_compat)
    {
      int data = KB_ASCII;
      device_set_status (kbd_dev, KDSKBDMODE, &data, 1);
    }
  device_close (kbd_dev);
  mach_port_deallocate (mach_task_self (), kbd_dev);

  return 0;
}

