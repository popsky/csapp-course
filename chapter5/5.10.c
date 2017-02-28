/*************************************************************************
    > File Name: 5.10.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月14日 星期四 14时51分20秒
 ************************************************************************/

#include<stdio.h>
void copy_array(long *src, long *dest, long n) {
	long i;
	for(i = 0; i < n; i++) {
		dest[i] = src[i];
	}
}
