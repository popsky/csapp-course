/*************************************************************************
    > File Name: 3.9.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月22日 星期五 14时36分12秒
 ************************************************************************/

#include<stdio.h>
long shift_left4_rightn(long x, long n) {
	x <<= 4;
	x >>= n;
	return x;
}
