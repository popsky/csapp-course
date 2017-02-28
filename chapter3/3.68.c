/*************************************************************************
    > File Name: 3.68.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月16日 星期一 14时19分12秒
 ************************************************************************/

#include<stdio.h>
#define A 9
#define B 5

typedef struct {
	int x[A][B];
	long y;
} str1;

typedef struct {
	char array[B];
	int t;
	short s[A];
	long u;
} str2;

void setVal(str1 *p, str2 *q) {
	long v1 = q->t;
	long v2 = q->u;
	p->y = v1+v2;
}
