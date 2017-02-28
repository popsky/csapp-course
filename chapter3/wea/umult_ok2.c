/*************************************************************************
    > File Name: umult_ok2.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 10时30分41秒
 ************************************************************************/

#include<stdio.h>
int umult_ok(unsigned long x, unsigned long y, unsigned long *dest) {
	unsigned char bresult;

	asm("movq %[x],%%rax		# Get x\n\t"
		"mulq %[y]				# Unsigned long multiply by y\n\t"
		"movq %%rax,%[p]		# Store low-order 8 bytes at dest\n\t"
		"setae %[b]				# Set result"
		: [p] "=m" (*dest), [b] "=r" (bresult) /* Outputs	 */
		: [x] "r" (x), [y] "r" (y)			   /* Inputs	 */
		: "%rax", "rdx"						   /* Overwrites */
		);

	return (int) bresult;
}
