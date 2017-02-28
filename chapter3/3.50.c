/*************************************************************************
    > File Name: 3.50.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月12日 星期四 17时21分30秒
 ************************************************************************/

#include<stdio.h>
double fcvt2(int *ip, float *fp, double *dp, long l) {
	int i = *ip; float f = *fp; double d = *dp;
	*ip = (int) d;
	*fp = (float) i;
	*dp = (double) l;
	return (double)f;
}
