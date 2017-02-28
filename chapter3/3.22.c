/*************************************************************************
    > File Name: 3.22.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月27日 星期三 16时37分23秒
 ************************************************************************/

#include<stdio.h>


int main() {
	long i = 2;
	for(;i > 0; i++) {
		if(!can_repre(i))
			break;
	}
	printf("int can represent %d! max!",(i-1));
}

int can_repre(long n) {
	long result = 1;
	long pre_result;
	do{
		pre_result = result;
		result *= n;
		if(pre_result >= result) {
			printf("pre_result = %d,result = %d\n",pre_result,result);
			return 0;
		}
		n = n - 1;
	} while(n > 1);
	return 1;

}
