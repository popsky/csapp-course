/*************************************************************************
    > File Name: 3.73.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 21时41分10秒
 ************************************************************************/

#include<stdio.h>
typedef enum {NEG, ZERO, POS, OTHER} range_t;

range_t find_range(float x) {
	char range;
	asm(
			"ucomiss %%xmm0,%%x"	
		);
}
