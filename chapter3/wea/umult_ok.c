/*************************************************************************
    > File Name: umult_ok.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 09时21分24秒
 ************************************************************************/

#include<stdio.h>
/* Multiply arguments and indicate whether it did not overflow */
int umult_ok__asm(unsigned long x, unsigned long y, unsigned long *dest) {
	unsigned long p = x*y;
	*dest = p;
	return p > 0;
}
