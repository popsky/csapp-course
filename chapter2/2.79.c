/*************************************************************************
    > File Name: 2.79.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月12日 星期二 16时34分09秒
 ************************************************************************/

#include<stdio.h>

/* compute the expretion 3 * x /4 follows the bit-level
 * integer coding rules
 */

int mul3div4(int x) {
	return ((x >> 1) + ((x << 1) >> 1)) >> 1;
}

int main() {
	printf("-5 * 3 / 4 = %d\n",mul3div4(-5));
}
