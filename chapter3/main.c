/*************************************************************************
    > File Name: main.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月19日 星期二 16时29分48秒
 ************************************************************************/

#include<stdio.h>

void multstore(long, long, long *);

int main() {
	long d;
	multstore(2, 3, &d);
	printf("2 * 3 --> %ld\n", d);
	return 0;
}

long mult2(long a, long b) {
	long s = a * b;
	return s;
}
