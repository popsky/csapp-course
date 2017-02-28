/*************************************************************************
    > File Name: alignment.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月08日 星期日 09时16分54秒
 ************************************************************************/

#include<stdio.h>
typedef struct P1 {
	char *a;
	short b;
	double c;
	char d;
	float e;
	char f;
	long g;
	int h;
}P1;
typedef struct P2 {
	char *a;
	double c;
	long g;
	int h;
	float e;
	short b;
	char d;
	char f;
}P2;
int init_P1(P2 *ptr1,P2 *ptr2) {
	ptr1->a = ptr2;
	ptr1->b = 2.1f;
	ptr1->c = 2.2;
	ptr1->d = 4;
	ptr1->e = 5;
	ptr1->f = 6;
	ptr1->g = 7;
	ptr1->h = 8;
	
}

