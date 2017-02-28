/*************************************************************************
    > File Name: 3.40.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月07日 星期六 10时56分58秒
 ************************************************************************/

#include<stdio.h>

#define N 16
typedef int fix_matrix[N][N];
/* Set all diagonal elements to val */
void fix_set_diag(fix_matrix A, int val) {
	long i;
	for(i = 0; i < N; i++) 
		A[i][i] = val;
}

void fix_set_diag_opt(fix_matrix A, int val) {
	int *ptr = &A[0][0];
	int *end = &A[N][N];
	do{
		*ptr = val;
		ptr += (N + 1);
	}while(ptr != end);
}
