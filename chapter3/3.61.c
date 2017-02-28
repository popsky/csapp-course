/*************************************************************************
    > File Name: 3.61.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月14日 星期六 20时56分42秒
 ************************************************************************/

#include<stdio.h>
long cread_alt(long *xp) {
	long t = 0;
	if(xp == NULL)
		xp = &t;
	return *xp;
}
