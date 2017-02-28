/*************************************************************************
    > File Name: 3.27.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月01日 星期日 18时03分07秒
 ************************************************************************/

#include<stdio.h>
long fact_for_guard_goto(long n) {
	long i = 2;
	long result = 1;
	if(i > n) 
		goto done;
loop:
	result *= i;
	i++;
	if(i <= n)
		goto loop;

done:
	return result;
}
