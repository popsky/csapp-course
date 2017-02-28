/*************************************************************************
    > File Name: 3.11.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月22日 星期五 22时20分28秒
 ************************************************************************/

#include<stdio.h>

long exclusive_or(long rdi, long rsi, long rdx){
	rdx ^= rdx;
	return rdx;
}

