/*************************************************************************
    > File Name: 3.66.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月15日 星期日 17时04分55秒
 ************************************************************************/

#define NR(n) n*3
#define NC(n) 4*n+1
#include<stdio.h>
long sum_col(long n, char A[NR(n)][NC(n)], long j) {
	long i;
	long result = 0;
	for(i = 0; i < NR(n); i++) 
		result += A[i][j];	
	return result;
}
int main() {
	char array[3][5];
	int i,j;
	for(i=0;i<3;i++) {
		for(j=0;j<5;j++)
			array[i][j] = '2';
	}
	
	printf("%lx\n",sum_col(110,array,11));
}
