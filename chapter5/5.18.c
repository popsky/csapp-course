/*************************************************************************
    > File Name: 5.6.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月19日 星期二 19时49分31秒
	> 常考自http://blog.csdn.net/yang_f_k/article/details/9471639
 ************************************************************************/

#include<stdio.h>
/* Apply Horner's method */
double polyh(double a[], double x, long degree) {
	long i;
	double x2 = x * x;
	double x3 = x2 * x;
	double x4 = x3 * x;
	double x5 = x4 * x;
	double result1,result2,result3 = a[degree];
	for(i = degree - 1; i >= 14; i -= 14) {
		result1 = result3*x5 + (a[i-4] + a[i-3]*x + a[i-2]x2 + a[i-1]*x3 + a[i]*x4);
		result2 = result1*x5 + (a[i-9] + a[i-8]*x + a[i-7]*x2 + a[i-6]*x3 + a[i-5] * x4);
		result3 = result2*x5 + (a[i-14] + a[i-13]*x + a[i-12]*x2 + a[i-11]*x3 + a[i-10] * x4);
	}
	while(i >= 0) {
		result3 += result3*x + a[i--];
	}
	return result3;
}
