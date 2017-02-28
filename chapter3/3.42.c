/*************************************************************************
    > File Name: 3.42.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月07日 星期六 17时07分45秒
 ************************************************************************/

#include<stdio.h>
struct ELE {
	long v;
	struct ELE *p;
};

long fun(struct ELE *ptr) {
	long result = 0;
	for(;ptr != NULL;ptr = ptr->p) {
		result += ptr->v;
	}
	return result;
}
