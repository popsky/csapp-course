/*************************************************************************
    > File Name: 3.24.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月29日 星期五 09时33分03秒
 ************************************************************************/

#include<stdio.h>
long loop_while(long a, long b) {
	long result = 1;
	while(a < b) {
		result = (a + b) * result;
		a = a + 1;
	}
	return result;
}
