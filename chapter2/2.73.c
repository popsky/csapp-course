/*************************************************************************
    > File Name: 2.73_2.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月08日 星期五 14时10分07秒
 ************************************************************************/

#include<stdio.h>

#define TMax 0x7fffffff
#define TMin (-TMax -1)
int saturating_add(int x, int y) {
	int w = sizeof(int) >> 3; // compute the word size 
	int msb = 1 << (w -1);  // for convenience, define the most significant bit
	int sum = x + y;
	!((x | y) & msb) && (sum & msb) && (sum = TMax);
	(x & y) & msb && !(sum & msb) && (sum = TMin);
	return sum;
}

int main() {
	printf("0x80000000 + 0x80000000 = %.2x\n",saturating_add(0x7fffffff,0x7fffffff));
}

