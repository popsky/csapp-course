/*************************************************************************
    > File Name: 3.28.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月02日 星期一 10时29分43秒
 ************************************************************************/

#include<stdio.h>
long fun_b(unsigned long x) {
	long val = 0;
	long i;
	for(i=64;i>0;i--) {
		val = (x & 1) | (val * 2);
		x >>= 1;
	}
	return val;
}

int main(){
	long i;
	for(i=1; i<100; i++){
		printf("fun_b(%ld) = %ld\n",i,fun_b(i));
	}
}
