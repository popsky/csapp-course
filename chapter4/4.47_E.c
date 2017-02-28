/*************************************************************************
    > File Name: 4.47_E.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月31日 星期二 15时06分12秒
 ************************************************************************/

#include<stdio.h>
void bubble_a(long *data, long count) {
	long i, last;
	for(last = count-1; last > 0; last--) {
		for(i=0;i<last;i++)
			if(data[i+1] < data[i]) {
				long t = data[i+1];
				data[i+1] = data[i];
				data[i] = t;
			}
	}
}
