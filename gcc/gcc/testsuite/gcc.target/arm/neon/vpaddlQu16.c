/* Test the `vpaddlQu16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vpaddlQu16 (void)
{
  uint32x4_t out_uint32x4_t;
  uint16x8_t arg0_uint16x8_t;

  out_uint32x4_t = vpaddlq_u16 (arg0_uint16x8_t);
}

/* { dg-final { scan-assembler "vpaddl\.u16\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */