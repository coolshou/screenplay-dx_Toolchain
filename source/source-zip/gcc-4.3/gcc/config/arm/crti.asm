#   Copyright (C) 2001 Free Software Foundation, Inc.
#   Written By Nick Clifton
# 
# This file is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the
# Free Software Foundation; either version 2, or (at your option) any
# later version.
# 
# In addition to the permissions in the GNU General Public License, the
# Free Software Foundation gives you unlimited permission to link the
# compiled version of this file with other programs, and to distribute
# those programs without any restriction coming from the use of this
# file.  (The General Public License restrictions do apply in other
# respects; for example, they cover modification of the file, and
# distribution when not linked into another program.)
# 
# This file is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; see the file COPYING.  If not, write to
# the Free Software Foundation, 51 Franklin Street, Fifth Floor,
# Boston, MA 02110-1301, USA.
# 
#    As a special exception, if you link this library with files
#    compiled with GCC to produce an executable, this does not cause
#    the resulting executable to be covered by the GNU General Public License.
#    This exception does not however invalidate any other reasons why
#    the executable file might be covered by the GNU General Public License.
# 

/* An executable stack is *not* required for these functions.  */
#if defined(__ELF__) && defined(__linux__)
.section .note.GNU-stack,"",%progbits
.previous
#endif

# This file just make a stack frame for the contents of the .fini and
# .init sections.  Users may put any desired instructions in those
# sections.

#ifdef __ELF__
#define TYPE(x) .type x,function
#else
#define TYPE(x)
#endif

	# Note - this macro is complemented by the FUNC_END macro
	# in crtn.asm.  If you change this macro you must also change
	# that macro match.
.macro FUNC_START
#ifdef __thumb__
	.thumb
	
	push	{r3, r4, r5, r6, r7, lr}
#else
	.arm
	#  Create a stack frame and save any call-preserved registers
	mov	ip, sp
	stmdb	sp!, {r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
	sub	fp, ip, #4
#endif
.endm
		
	.section	".init"
	.align 2
	.global	_init
#ifdef __thumb__
	.thumb_func
#endif
	TYPE(_init)
_init:
	FUNC_START
	
		
	.section	".fini"
	.align	2
	.global	_fini
#ifdef __thumb__
	.thumb_func
#endif
	TYPE(_fini)
_fini:
	FUNC_START
	
# end of crti.asm
