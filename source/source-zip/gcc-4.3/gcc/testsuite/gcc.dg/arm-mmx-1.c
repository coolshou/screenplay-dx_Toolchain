/* Verify that if IP is saved to ensure stack alignment, we don't load
   it into sp.  */
/* { dg-do compile } */
/* { dg-skip-if "" { *-*-* } { "-mcpu=*" } { "-mcpu=iwmmxt" } } */
/* { dg-skip-if "" { *-*-* } { "-mabi=*" } { "-mabi=iwmmxt" } } */
/* { dg-skip-if "" { *-*-* } { "-mfloat-abi=softfp" } { "" } } */
/* { dg-skip-if "" { *-*-* } { "-march=*" } { "-march=iwmmxt" } } */
/* { dg-options "-O -mno-apcs-frame -mcpu=iwmmxt -mabi=iwmmxt" } */
/* { dg-require-effective-target arm32 } */
/* { dg-require-effective-target arm_iwmmxt_ok } */
/* { dg-final { scan-assembler "ldmfd\[ 	]sp!.*ip,\[ ]*pc" } } */

/* This function uses all the call-saved registers, namely r4, r5, r6,
   r7, r8, r9, sl, fp.  Since we also save lr, that leaves an odd
   number of registers, and the compiler will push ip to align the
   stack.  Make sure that we restore ip into ip, not into sp as is
   done when using a frame pointer.  The -mno-apcs-frame option
   permits the frame pointer to be used as an ordinary register.  */

void
foo(void)
{
  __asm volatile ("" : : :
		  "r4", "r5", "r6", "r7", "r8", "r9", "sl", "fp", "lr");
}
