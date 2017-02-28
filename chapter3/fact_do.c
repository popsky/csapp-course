/*************************************************************************
    > File Name: fact_do.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月27日 星期三 16时32分07秒
 ************************************************************************/

#include<stdio.h>
long fact_do(long n) {
	long result = 1;
	do {
		result *= n;
		n = n-1;
	} while(n>1);
	return result;
}
