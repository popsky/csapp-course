/*************************************************************************
    > File Name: fcvt.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月12日 星期四 16时02分21秒
 ************************************************************************/

#include<stdio.h>
double fcvt(int i, float *fp, double *dp, long *lp) {
	float f = *fp; double d = *dp; long l = *lp;
	*lp = (long)  d;
	*fp = (float) i;
	*dp = (double) l;
	return (double) f;
}
int main() {
	float f = 1.2f;
	double d = 1.333;
	long l = 1024l;
	fcvt(10,&f, &d, &l);
}
