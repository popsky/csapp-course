/*************************************************************************
    > File Name: 3.75.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月18日 星期三 15时54分14秒
 ************************************************************************/

#include<stdio.h>
#include<complex.h>
double c_imag(double complex x) {
	return cimag(x);
}

double c_real(double complex x) {
	return creal(x);
}

double complex c_sub(double complex x, double complex y) {
	return x - y;
}
