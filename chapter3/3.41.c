/*************************************************************************
    > File Name: 3.41.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月07日 星期六 16时58分42秒
 ************************************************************************/

#include<stdio.h>
struct prob{
	int *p;
	struct	{
		int x;
		int y;
	} s;
	struct prob *next;
};

void sp_init(struct prob *sp) {
	sp->s.x = sp->s.y;
	sp->p = &(sp->s.x);
	sp->next = sp;
}
