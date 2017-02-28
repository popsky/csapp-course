/*************************************************************************
    > File Name: floatregister.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月11日 星期三 13时33分46秒
 ************************************************************************/

#include<stdio.h>

float float_mov(float v1, float *src, float *dest) {
	float v2 = *src;
	*dest = v1;
	return v2;
}
