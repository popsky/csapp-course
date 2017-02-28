/*************************************************************************
    > File Name: vframe.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月10日 星期二 09时43分01秒
 ************************************************************************/

#include<stdio.h>
long vframe(long n, long idx, long *q) {
	long i;
	long *p[n];
	p[0] = &i;
	for(i = 1; i < n; i++) 
		p[i] = q;
	return *p[idx];
}
int main() {
	long local;
	vframe(0xf,4,&local);
}

