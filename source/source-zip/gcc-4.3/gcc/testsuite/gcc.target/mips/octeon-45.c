/* Check the *branch_bit_truncdi pattern.  */
/* { dg-mips-options "-march=octeon -Os -mabi=64" } */
int foo (void);
int
f1 (unsigned long x)
{ unsigned int y = x; if (y & (1UL << 30)) foo (); return 1; }
int
f2 (unsigned long x)
{ unsigned int y = x; if (y & (1UL << 1)) foo (); return 1; }
int
f3 (unsigned long x)
{ unsigned int y = x; if (y & (1UL << 0)) foo (); return 1; }
/* { dg-final { scan-assembler "\tbbit0\t\\\$4,30," } } */
/* { dg-final { scan-assembler "\tbbit0\t\\\$4,1," } } */
/* { dg-final { scan-assembler "\tbbit0\t\\\$4,0," } } */
