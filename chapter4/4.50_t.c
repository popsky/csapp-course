/*************************************************************************
    > File Name: 4.50_T.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年06月01日 星期三 16时46分33秒
 ************************************************************************/
/* Testing Code*/

#include<stdio.h>
#define CNT 8
#define MINVAL -1

int main() {
	long vals[CNT];
	long i;
	for(i=0; i<CNT; i++) {
		vals[i] = switchv(i + MINVAL);
		printf("idx = %ld, val = 0x%lx\n",i + MINVAL, vals[i]);
	}
	return 0;
}
