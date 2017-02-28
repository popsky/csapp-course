/*************************************************************************
    > File Name: 5.9.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月12日 星期二 14时12分39秒
 ************************************************************************/

#include<stdio.h>
void merge(long src1[], long src2[], long dest[], long n) {
	long i1 = 0;
	long i2 = 0;
	long id = 0;
	while(i1 < n && i2 < n) {
		long min = src1[i1] < src2[i2] ? src1[i1++] : src2[i2++];
		dest[id++] = min;
	}
	while(i1<n) 
		dest[id++] = src1[i1++];
	while(i2<n)
		dest[id++] = src1[i2++];
}
