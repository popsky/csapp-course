/*************************************************************************
    > File Name: 3.23.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月27日 星期三 17时17分32秒
 ************************************************************************/

#include<stdio.h>
long dw_loop(long x) {
	long y = x * x;
	long *p = &x;
	long n = 2*x;
	do { 
		x += y;
		(*p)++;
		n--;
	} while(n > 0);
	return x;
}
