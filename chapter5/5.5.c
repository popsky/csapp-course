/*************************************************************************
    > File Name: 5.5.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月08日 星期五 13时51分51秒
 ************************************************************************/

#include<stdio.h>
double poly(double a[], double x, long degree) {
	long i;
	double result = a[0];
	double xpwr = x; /* Equals x^i at start of loop */
	for (i=1; i<=degree; i++) {
		result += a[i] * xpwr;
		xpwr = x * xpwr;
	}
	return result;
}
