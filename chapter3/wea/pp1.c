/*************************************************************************
    > File Name: pp1.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 11时24分36秒
 ************************************************************************/

#include<stdio.h>
int tmult_ok3(long x, long y, long *dest) {
	unsigned char bresult;
	asm (
		"imulq %%rdi, %%rsi		# Compute x*y\n\t"
		"movq  %%rsi, %[p]		# Store product on *dest\n\t"
		"setae %[b]				# Set bresult"
		: [b] "=r" (bresult) , [p] "=m" (*dest)
		);
	return (int)bresult;
}
