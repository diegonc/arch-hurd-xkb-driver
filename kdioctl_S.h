#ifndef	_kdioctl_server_
#define	_kdioctl_server_

/* Module kdioctl */

#include <mach/kern_return.h>
#include <mach/port.h>
#include <mach/message.h>

#include <mach/std_types.h>
#include <mach/mach_types.h>
#include <device/device_types.h>
#include <device/net_status.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/statfs.h>
#include <sys/resource.h>
#include <sys/utsname.h>
#include <hurd/hurd_types.h>
#include <hurd/ioctl_types.h>

/* Routine kdioctl_kdskbdmode */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t S_kdioctl_kdskbdmode
#if	defined(LINTLIBRARY)
    (port, mode)
	io_t port;
	int mode;
{ return S_kdioctl_kdskbdmode(port, mode); }
#else
(
	io_t port,
	int mode
);
#endif

/* Routine kdioctl_kdgkbdmode */
#ifdef	mig_external
mig_external
#else
extern
#endif
kern_return_t S_kdioctl_kdgkbdmode
#if	defined(LINTLIBRARY)
    (port, mode)
	io_t port;
	int *mode;
{ return S_kdioctl_kdgkbdmode(port, mode); }
#else
(
	io_t port,
	int *mode
);
#endif

#endif	/* not defined(_kdioctl_server_) */
