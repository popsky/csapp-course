/*************************************************************************
    > File Name: tmult_ok.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月16日 星期一 23时40分03秒
 ************************************************************************/

#include<stdio.h>
/* Starter function for tmult_ok */
/* Multiply arguments and indicate whether it did not overflow */
 int tmult_ok_asm(long x, long y, long *dest) {
	long p = x*y;
	*dest = p;
	return p > 0;
 }
