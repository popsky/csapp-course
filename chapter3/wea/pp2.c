/*************************************************************************
    > File Name: pp2.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 11时38分25秒
 ************************************************************************/

#include<stdio.h>
/* Multiply two 64-bit numbers to get 128-bit result.
 */
void umult_full(unsigned long x,unsigned long y, unsigned long *dest) {
	asm(
		"movq	%[x], %%rax		# Convert x to 128bit\n\t"
		"xorq	%%rdx, %%rdx		# Set the high-order eight bytes to 0x0\n\t"
		"mulq	%[y]			# 128-bit unsigned long mutiply by y\n\t"
		"movq	%%rax, %[d]		# Store low-order eight bytes to dest[0]\n\t"
		"movq	%%rdx, 8%[d]		# Store high-order eight bytes to dest[1]"
		: [d] "=m" (*dest)  
		: [x] "r" (x), [y] "r" (y)
		: "%rax", "%rdx"
		);
	return;
}

void umult_full2(unsigned long x, unsigned long y, unsigned long *dest) {
	asm(
			"movq %[x],%%rax \n\t"
			"mulq %[y] \n\t"
			"movq %%rax,%[lo] \n\t"
			"movq %%rdx,%[hi] "
			:[lo] "=m" (dest[0]), [hi] "=m" (dest[1])
			:[x] "r" (x) ,[y] "r" (y)
			: "%rax", "%rdx"
			);
}

int main() {
	long result[2];
	umult_full(0xffffffffffffffff,0xffffffffffffffff,result);
	printf("umult_full2(ffffffffffffffff,ffffffffffffffff) =h:%lx + l:%lx",result[1],result[0]);
}
