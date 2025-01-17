/* BFD support for the M32R processor.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"

#define N(number, print, default, next)  \
{ 32, 32, 8, bfd_arch_m32r, number, "m32r", print, 4, default, \
  bfd_default_compatible, bfd_default_scan, bfd_arch_default_fill, next, 0 }

#define M32R2_NEXT   & arch_info_struct [1]
#define NEXT	     & arch_info_struct [0]

static const bfd_arch_info_type arch_info_struct[] =
{
  N (bfd_mach_m32rx, "m32rx", false, M32R2_NEXT) ,
  N (bfd_mach_m32r2, "m32r2", false, NULL)
};

const bfd_arch_info_type bfd_m32r_arch =
  N (bfd_mach_m32r, "m32r", true, NEXT);
