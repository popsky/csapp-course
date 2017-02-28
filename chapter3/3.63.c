/*************************************************************************
    > File Name: 3.63.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月15日 星期日 14时05分48秒
 ************************************************************************/

#include<stdio.h>
long switch_prob(long x, long n) {
	long result = x;
	switch(n) {
		case 60:
		case 62:
			result = 8 * x;
			break;
		case 63:

			result = x >> 3;
			break;
		case 64:
			x = x*16 - x;
		case 65:
			x = x * x;
		default:
			result = x + 0x4b;
	}
	return result;
}
int main() {
	long result = switch_prob(5,67);
}
