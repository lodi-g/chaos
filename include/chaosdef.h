/* ------------------------------------------------------------------------ *\
**
**  This file is part of the Chaos Kernel, and is made available under
**  the terms of the GNU General Public License version 2.
**
**  Copyright (C) 2017 - Benjamin Grange <benjamin.grange@epitech.eu>
**
\* ------------------------------------------------------------------------ */

#ifndef _CHAOSDEF_H_
# define _CHAOSDEF_H_

# include <stddef.h>
# include <stdbool.h>
# include <stdarg.h>

/*
** Define a useful set of macros that act like keywords that are not
** available in c11.
*/
# define inline			__inline
# define asm			__asm__
# define restrict		__restrict
# define __pure			__attribute__((pure))
# define __const		__attribute__((const))
# define __cold			__attribute__((cold))
# define __hot			__attribute__((hot))
# define __used			__attribute__((used))
# define __unused		__attribute__((unused))
# define __packed		__attribute__((packed))

/* Defines some shortcuts types. */
typedef unsigned int		uint;
typedef unsigned short		ushort;
typedef unsigned char		uchar;
typedef unsigned long		ulong;

/* Defines some size-dependant types. */
typedef signed char		int8;
typedef signed short		int16;
typedef signed int		int32;
typedef signed int		intptr;

typedef unsigned char		uint8;
typedef unsigned short		uint16;
typedef unsigned int		uint32;
typedef unsigned int		uintptr;

/* Defined in linker script */
extern void *KERNEL_VIRTUAL_LINK;
extern void *KERNEL_VIRTUAL_BASE;
extern void *KERNEL_VIRTUAL_END;
extern void *KERNEL_PHYSICAL_END;

# define PTR_KERNEL_VIRTUAL_LINK	((void *)&KERNEL_VIRTUAL_LINK)
# define PTR_KERNEL_VIRTUAL_BASE	((void *)&KERNEL_VIRTUAL_BASE)
# define PTR_KERNEL_VIRTUAL_END		((void *)&KERNEL_VIRTUAL_END)
# define PTR_KERNEL_PHYSICAL_END	((void *)&KERNEL_PHYSICAL_END)

#endif /* !_CHAOSDEF_H_ */
