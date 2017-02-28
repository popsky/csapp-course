/*************************************************************************
    > File Name: 3.43.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月07日 星期六 19时52分44秒
 ************************************************************************/

#include<stdio.h>
#define type char 
#define expr *up->t2.p 
typedef union {
	struct {
		long u;
		short v;
		char w;
	} t1;
	struct {
		int a[2];
		char *p;
	} t2;
} u_type;

void get(u_type *up, type *dest) {
	*dest = expr;
}
