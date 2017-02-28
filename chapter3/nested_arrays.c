/*************************************************************************
    > File Name: nested_arrays.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月06日 星期五 17时04分39秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int i,A[5][3]= {
	1,2,3,
	4,5,6,
	7,8,9,
	10,11,12,
	13,14,15
	};
	int (*Ap)[3] = A;
	int *ip = Ap+1;

	for(i=0; i<3;i++) 
		printf(" %d ",ip[i]);
	printf("Ap = %lx\n",Ap);
}

