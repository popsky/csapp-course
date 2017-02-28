/*************************************************************************
    > File Name: 3.25.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月29日 星期五 10时45分24秒
 ************************************************************************/

#include<stdio.h>
long loop_while2(long a, long b) {
	long result = b;
	while(b > 0) {
		result *= a;
		b = b - a;
	}
	return result;
}
