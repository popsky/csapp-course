/*************************************************************************
    > File Name: test.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月03日 星期二 10时45分17秒
 ************************************************************************/

#include<stdio.h>
int main() {
	long l1 = -100;
	long l2 = 0x8000000000000000;
	int i;
	for(i = 0; i < 1000; i++){
	printf("%ld + %ld = %ld\n",l1,l2,l1+l2);
	if((l1+l2)<0)
		break;
	l2++;
	}
}
