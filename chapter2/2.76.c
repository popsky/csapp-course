/*************************************************************************
    > File Name: 2.76.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月10日 星期日 10时01分23秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *calloc(size_t nmemb, size_t size) {
	if(nmemb==0 || size == 0)
		return NULL;

	void *start = malloc(nmemb * size);
	memset(start,0,nmemb);
	return start;
}

int main() {
	short *p = calloc(0x80000000,0x2);

}
