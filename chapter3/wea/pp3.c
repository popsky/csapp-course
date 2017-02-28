/*************************************************************************
    > File Name: pp3.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 13时31分48秒
 ************************************************************************/

#include<stdio.h>
void bad_incr(int *ptr) {
	(*ptr)++;
}

void lock_incr(int *ptr) {
	asm (
			"lock			# Atomic perfome addl insruction\n\t"
			"addl $1,%[p]	# Increse value by 1"
			: [p] "=m" (*ptr)
		);
	return;
}
