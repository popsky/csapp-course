/*************************************************************************
    > File Name: mstore.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月19日 星期二 16时03分20秒
 ************************************************************************/

#include<stdio.h>
long mult2(long,long);

void multstore(long x, long y, long *dest) {
	long t = mult2(x,y);
	*dest = t;
}
