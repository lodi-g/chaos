/* ------------------------------------------------------------------------ *\
**
**  This file is part of the Chaos Kernel, and is made available under
**  the terms of the GNU General Public License version 2.
**
**  Copyright (C) 2017 - Benjamin Grange <benjamin.grange@epitech.eu>
**
\* ------------------------------------------------------------------------ */

#ifndef _INIT_H_
# define _INIT_H_

# include <chaosdef.h>
# include <limits.h>

enum	init_level
{
	CHAOS_INIT_LEVEL_EARLIEST	= 0x00001,

	CHAOS_INIT_LEVEL_ARCH_EARLY	= 0x10000,
	CHAOS_INIT_LEVEL_DEV_EARLY	= 0x20000,
	CHAOS_INIT_LEVEL_DRIVER_EARLY	= 0x30000,
	CHAOS_INIT_LEVEL_ARCH		= 0x40000,
	CHAOS_INIT_LEVEL_DEV		= 0x50000,
	CHAOS_INIT_LEVEL_DRIVER		= 0x60000,

	CHAOS_INIT_LEVEL_LATEST		= INT_MAX
};

typedef void(*init_hook_funcptr)(enum init_level);

struct	init_hook
{
	enum init_level level;
	init_hook_funcptr hook;
	char const *name;
};

# define NEW_INIT_HOOK(n, h, l)						\
	__aligned(sizeof(void*)) __used __section("chaos_init")		\
	static const struct init_hook _init_hook_struct_##n = {		\
		.level = l,						\
		.hook = h,						\
		.name = #n,						\
	}

void	kernel_init_level(enum init_level, enum init_level);

#endif /* !_INIT_H_ */
