/*************************************************************************
    > File Name: savedlocal.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月06日 星期五 08时54分52秒
 ************************************************************************/

#include<stdio.h>

long Q(long);

long P(long x, long y) {
	long u = Q(y);
	long v = Q(x);
	return u + v;
}

long Q(long z){
	return z * 4;
}
