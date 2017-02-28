/*************************************************************************
    > File Name: 4.47_A.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月31日 星期二 10时50分20秒
 ************************************************************************/

#include<stdio.h>
/* Bubble sort: Pointer version */
void bubble_p(long *data,long count) {;
	long *last_p,*p;
	for(last_p=data+count-1;last_p!=data;last_p--) {
		for(p=data;p<last_p;p++){
			if(*p>*(p+1)) {
				long t = *p;
				*p = *(p+1);
				*(p+1) = t;
			}
		}
	}
}
int main() {
	long a[10]={5,3,10,19,44,2,4,0,1,-1};
	bubble_p(a,10);
	int i;
	for(i=0;i<10;i++){
		printf("%ld ",a[i]);
	}
}
