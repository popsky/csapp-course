/*************************************************************************
    > File Name: find_range.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月13日 星期五 10时20分49秒
 ************************************************************************/

#include<stdio.h>
typedef enum {NEG, ZERO, POS, OTHER} range_t;

range_t find_range(float x) {
	int result;
	if(x < 0)
		result = NEG;
	else if(x == 0) 
		result = ZERO;
	else if(x > 0)
		result = POS;
	else 
		result = OTHER;
	return result;
}
