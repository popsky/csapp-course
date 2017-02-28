/*************************************************************************
    > File Name: tmult_ok2.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 10时05分25秒
 ************************************************************************/

#include<stdio.h>
int tmult_ok2(long x, long y, long *dest) {
	int result;

	*dest = x*y;
	asm("setae %%bl				# Set low-order byte \n\t"
		"movzbl %%bl,%[val]		# Zero extend to be result"
		: [val]  "=r" (result)		/* Output */
		:							/* No inputs */
		: "%bl"						/* Overwrites */
		);
	return result;
}
