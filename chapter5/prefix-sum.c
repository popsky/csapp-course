/*************************************************************************
    > File Name: prefix-sum.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月19日 星期二 10时08分46秒
 ************************************************************************/

#include<stdio.h>
/* Compute prefix sum of vector a */
void psum1(float a[], float p[], long n) {
	long i;
	float accu = 0;
	for(i = 0; i < n; i++) {
		accu += a[i];
		p[i] = accu;
	}
}

void psum_519(float a[], float p[], long n) {
	long i;
	float accu0,accu1;
	accu0 = a[0];
	for()
}
/* Solutions for Problem 5.19 */
void psum2(float a[], float p[], long n) {
	long i;
	p[0] = a[0];
	float t = p[0];
	for(i = 1; i < n-3; i+=4) {
		long t1,t2;
		t1 = a[i] + a[i+1];
		t2 = t1 + a[i+2];
		p[i] = t + a[i];
		p[i+1] = t + t1;
		p[i+2] = t + t2;
		t += (t2 + a[i+3]);
		p[i+3] = t;
	}
	/* Finish remaining element */
	if(i < n) 
		p[i] = p[i-1] + a[i];
}
