/* { dg-do compile } */
/* { dg-options "-O0 -mmmx" } */

/* Test that the intrinsics compile without optimization.  All of them are
   defined as inline functions in mmintrin.h that reference the proper
   builtin functions.  Defining away "extern" and "__inline" results in
   all of them being compiled as proper functions.  */

#define extern
#define __inline

#include <mmintrin.h>
