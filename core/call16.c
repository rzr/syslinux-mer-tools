/* ----------------------------------------------------------------------- *
 *
 *   Copyright 2009 Intel Corporation; author: H. Peter Anvin
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 *   Boston MA 02110-1301, USA; either version 2 of the License, or
 *   (at your option) any later version; incorporated herein by reference.
 *
 * ----------------------------------------------------------------------- */

/*
 * call16.c
 *
 * Simple wrapper to call 16-bit core functions from 32-bit code
 */

#include <stddef.h>
#include "core.h"

void call16(void (*func)(void), const com32sys_t *ireg, com32sys_t *oreg)
{
    core_farcall((size_t)func, ireg, oreg);
}
