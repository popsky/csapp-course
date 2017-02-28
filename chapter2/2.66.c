/*************************************************************************
    > File Name: 2.66.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月11日 星期一 10时55分39秒
 ************************************************************************/

#include<stdio.h>

/*
 * Generate mask indicating leftmost 1 in x. Assume w=32.
 * For example, 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
 * If x = 0, then return 0.
 */

int leftmost_one(unsigned x) {
	x |= (x >> 1);
	x |= (x >> 2);
	x |= (x >> 4);
	x |= (x >> 8);
	x |= (x >> 16);
	return x^(x >> 1);
}
