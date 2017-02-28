/*************************************************************************
    > File Name: 3.58.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月13日 星期五 13时58分05秒
 ************************************************************************/
 
#include<stdio.h>
long decode2(long x, long y, long z) {
	long temp = y - z;
	long result = x * temp;
	temp <<= 63;
	temp >>= 63;
	return result ^ temp;
}
