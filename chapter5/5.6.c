/*************************************************************************
    > File Name: 5.6.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月19日 星期二 19时49分31秒
 ************************************************************************/

#include<stdio.h>
/* Apply Horner's method */
double polyh(double a[], double x, long degree) {
	long i;
	double result = a[degree];
	for(i = degree - 1; i >= 0; i--) 
		result = a[i] + x*result;
	return result;
}
