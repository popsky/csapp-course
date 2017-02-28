/*************************************************************************
    > File Name: store_uprod.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月22日 星期五 22时59分19秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

typedef unsigned __int128 uint128_t;

void store_uprod(uint128_t *dest, uint64_t x, uint64_t y) {
	*dest = (uint128_t)x * y;
}
