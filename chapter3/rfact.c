/*************************************************************************
    > File Name: rfact.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月06日 星期五 09时38分28秒
 ************************************************************************/

#include<stdio.h>
long rfact(long n) {
	long result;
	if(n <= 1)
		result = 1;
	else
		result = n * rfact(n-1);
	return result;
}
