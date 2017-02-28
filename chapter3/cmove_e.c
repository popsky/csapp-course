/*************************************************************************
    > File Name: cmove_e.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月18日 星期三 11时59分51秒
 ************************************************************************/

#include<stdio.h>
int absdiff(int x, int y) {
	int result;
	if(x < y)
		result = y - x;
	else 
		result = x - y;
	return result;
}
