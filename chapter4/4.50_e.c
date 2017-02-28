/*************************************************************************
    > File Name: 4.50_E.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年06月01日 星期三 16时44分05秒
 ************************************************************************/

#include<stdio.h>
/* Example use of switch statment */

long switchv(long idx) {
	long result = 0;
	switch(idx) {
		case 0:
			result = 0xaaa;
			break;
		case 2:
		case 5:
			result = 0xbbb;
			break;
		case 3:
			result = 0xccc;
			break;
		default:
			result = 0xddd;
	}
	return result;
}
