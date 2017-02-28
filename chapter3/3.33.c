/*************************************************************************
    > File Name: 3.33.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月05日 星期四 19时04分10秒
 ************************************************************************/

#include<stdio.h>
int sum(int a,short b,long *u,char *v) {
	*u += a;
	*v += b;
	return sizeof(a) + sizeof(b);
}

int main() {
	long l;
	char c;
	sum(1,2,&l,&c);
}
