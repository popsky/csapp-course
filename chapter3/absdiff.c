/*************************************************************************
    > File Name: absdiff.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月26日 星期二 14时13分39秒
 ************************************************************************/

#include<stdio.h>
long absdiff(long x, long y) {
	long result;
	if(x < y) 
		result = y - x;
	else 
		result = x - y;
	return result;
}
