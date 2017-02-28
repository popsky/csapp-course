/*************************************************************************
    > File Name: 3.70.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月16日 星期一 15时12分31秒
 ************************************************************************/

#include<stdio.h>
union ele{
	struct {
		long *p;
		long y;
	} e1;
	struct {
		long x;
		union ele *next;
	} e2;
};

void proc(union ele *up) {
	up->e2.x   = *(up->e2.next->e1.p) - up->e2.next->e1.y;
}


