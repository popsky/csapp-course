/*************************************************************************
    > File Name: 2.75.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月09日 星期六 14时03分20秒
 ************************************************************************/

#include<stdio.h>

unsigned  unsigned_high_prod(unsigned x, unsigned y) {
	int w = sizeof(int) << 3;
	unsigned msb = 1 << (w -1);
	unsigned high_prod = signed_high_prod(x,y) + x * (y >> (w-1)) + y * (x >> (w -1));
	return high_prod;
}
