/*************************************************************************
    > File Name: absdiff_se.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月26日 星期二 11时36分34秒
 ************************************************************************/

#include<stdio.h>
long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y) {
	long result;
	if(x < y) {
		lt_cnt++;
		result = y - x;
	} else {
		ge_cnt++;
		result = x - y;
	}
	return result;
}
