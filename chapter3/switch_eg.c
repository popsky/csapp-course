/*************************************************************************
    > File Name: switch_eg.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月02日 星期一 15时14分24秒
 ************************************************************************/

#include<stdio.h>
void switch_eg(long x, long n,long *dest) {
	long val = x;

	switch(n) {
		case 100:
			val *= 13;
			break;
		case 102:
			val += 10;

		case 103:
			val += 11;
			break;
		case 104:
		case 106:
			val *= val;
			break;
		default:
			val = 0;
	}
	*dest = val;
}
