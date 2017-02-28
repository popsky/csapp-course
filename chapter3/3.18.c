/*************************************************************************
    > File Name: 3.18.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月26日 星期二 13时52分36秒
 ************************************************************************/

#include<stdio.h>
long test(long x, long y, long z) {
	long val = x + y + z;
	if(x < -3) {
		if (y >= z)
			val = y * z;
		else
			val = x * y;
	} else if(x > 2)
		val = x * z;
	return val;
}
