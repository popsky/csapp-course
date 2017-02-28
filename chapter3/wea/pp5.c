/*************************************************************************
    > File Name: pp5.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 14时52分35秒
 ************************************************************************/

#include<stdio.h>
/* Return minimum of x and y */
double dmin(double x, double y) {
	double minimun;
	asm (
			"minsd %[y],%[x]		# Determine the minimun\n\t"
			"movsd %[x],%[m]		# Store the minimun"
			: [m] "=x" (minimun)
			: [y] "x" (y), [x] "x" (x)
		);
	return minimun;
}
int main() {
	printf("dmin(100.5,62.5)=%f\n",dmin(100.5,62.5));
}
