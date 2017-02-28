/*************************************************************************
    > File Name: 3.59.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月13日 星期五 14时30分02秒
 ************************************************************************/

#include<stdio.h>
#include<stdint.h>
typedef __int128 int128_t;

void store_prod(int128_t *dest, int64_t x, int64_t y) {
	*dest = x * (int128_t)y;
}
