/*************************************************************************
    > File Name: 3.35.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月06日 星期五 09时51分00秒
 ************************************************************************/

#include<stdio.h>
long rfun(unsigned long x) {
	if(x == 0)
		return 0;
	unsigned long nx = x >> 2;
	long rv = rfun(nx);
	return rv + x;
}
