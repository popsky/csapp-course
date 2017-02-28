/*************************************************************************
    > File Name: decode1.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月21日 星期四 21时05分55秒
 ************************************************************************/

#include<stdio.h>
long decode1(long *xp, long *yp, long *zp) {
	long tmp = *zp;
	*zp = *yp;
	*yp = *xp;
	*xp = tmp;
	return tmp;
}
