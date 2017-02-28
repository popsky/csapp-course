/*************************************************************************
    > File Name: 3.31.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月04日 星期三 14时49分17秒
 ************************************************************************/

#include<stdio.h>
 
void switcher(long a, long b, long c, long *dest) {
	long val;
	switch(a) {
	case 5:
		c = b ^ 15;
	case 0:
		val = 112 + c;
		break;
	case 2:
	case 7:
		val = (c + b) << 2;
		break;
	case 4:
		val = a;
		break;
	default:
		val = b;
	}
	*dest = val;
}
