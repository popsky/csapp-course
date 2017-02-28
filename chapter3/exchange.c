/*************************************************************************
    > File Name: exchange.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月21日 星期四 18时53分32秒
 ************************************************************************/

#include<stdio.h>
long exchange(long *xp, long y) {
	long x = *xp;
	*xp = y;
	return x;
}
