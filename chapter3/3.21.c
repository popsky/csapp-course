/*************************************************************************
    > File Name: 3.21.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月27日 星期三 16时11分25秒
 ************************************************************************/

#include<stdio.h>
long test(long x, long y) {
	long val = 8 * x;
	if(y > 0) {
		if(x >= y) 
			val = x+y;
		else 
			val = y - x;
	} else if(y <= -2)
		val = x + y;
	return val;
}
