/* ------------------------------------------------------------------------ *\
**
**  This file is part of the Chaos Kernel, and is made available under
**  the terms of the GNU General Public License version 2.
**
**  Copyright (C) 2017 - Benjamin Grange <benjamin.grange@epitech.eu>
**
\* ------------------------------------------------------------------------ */

#include <chaosdef.h>
#include <stdio.h>

void
panic(const char *fmt, ...)
{
	va_list va;

	/* TODO: disable interrupts */
	va_start(va, fmt);
	printf("\nKernel panicked: ");
	vprintf(fmt, va);
	va_end(va);
	for (;;)
	  ;
}

