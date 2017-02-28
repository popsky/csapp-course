/*************************************************************************
    > File Name: 3.57.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月13日 星期五 10时56分51秒
 ************************************************************************/

#include<stdio.h>
double funct3(int *ap, double b, long c, float *dp) {
	int a = *ap;
	float d = *dp;
	
	if(b <= a) {
		return 2 * d + c;
	} else {
		return c * d;
	}
}
