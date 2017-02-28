/*************************************************************************
    > File Name: fix_prod_ele.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月07日 星期六 10时04分28秒
 ************************************************************************/

#include<stdio.h>
#define N 16
typedef int fix_matrix[N][N];
/* Compute i,k of fixed matrix product */
int fix_prod_ele(fix_matrix A, fix_matrix B, long i, long k) {
	long j;
	int result = 0;
	
	for(j=0; j < N; j++) 
		result += A[i][j] * B[j][k];
	
	return result;
}
