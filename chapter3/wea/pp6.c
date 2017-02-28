/*************************************************************************
    > File Name: pp6.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 15时27分22秒
 ************************************************************************/

#include<stdio.h>
/* Return sqrt(x) */
double dsqrt(double x) {
	double result;
	asm	(
			"sqrtsd %[x], %[r]	# Floating-point square root"
			: [r] "=x" (result)
			: [x] "x" (x)
		);
	return result;
}

int main() {
	printf("dsqrt(100) = %f\n",dsqrt(100.0));
}
