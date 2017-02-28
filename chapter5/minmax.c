/*************************************************************************
    > File Name: minmax.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月12日 星期二 13时36分56秒
 ************************************************************************/

#include<stdio.h>
/* Rearrange two vectors so that for each i, b[i] >= a[i] */
// version 1,conditional control transfers
void minmax1(long a[], long b[], long n) {
	long i;
	for(i=0; i<n; i++) {
		if(a[i]>b[i]) {
			long t = a[i];
			a[i] = b[i];
			b[i] = t;
		}
	}
}

// version 2,conditional data transfers
void minmax2(long a[], long b[], long n) {
	long i;
	for(i=0; i<n; i++){
		long min = a[i] < b[i] ? a[i] : b[i];
		long max = a[i] < b[i] ? b[i] : a[i];
		a[i] = min;
		b[i] = max;
	}
}
