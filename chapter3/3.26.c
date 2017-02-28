/*************************************************************************
    > File Name: 3.26.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月30日 星期六 09时37分45秒
 ************************************************************************/

#include<stdio.h>
long fun_a(unsigned long x) {
	long val = 0;
	while(x) {
		val ^= x;
		x >>= 1;
	}
	return val & 0x1;
}

int main() {
	unsigned long i;
	for(i=0; i<100; i++) {
	printf("i = %lu, fun_a(i) = %ld\n",i,fun_a(i));
	
	}
}
