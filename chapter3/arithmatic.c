/*************************************************************************
    > File Name: arithmatic.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月22日 星期五 20时36分17秒
 ************************************************************************/

#include<stdio.h>
long arith(long x, long y, long z) {
	long t1 = x ^ y;
	long t2 = z * 48;
	long t3 = t1 & 0x0f0f0f0f;
	long t4 = t2 - t3;
	return t4;
}
