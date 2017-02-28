/*************************************************************************
    > File Name: var_prod_ele.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月07日 星期六 15时29分42秒
 ************************************************************************/

#include<stdio.h>
/* Compute i,k of variable matrix product */
int var_prod_ele(long n, int A[n][n], int B[n][n], long i, long k) {
	long j;
	int result = 0;

	for(j = 0; j < n; j++) 
		result += A[i][j] * B[j][k];

	return result;
}
