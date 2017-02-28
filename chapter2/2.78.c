/*************************************************************************
    > File Name: 2.78.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月11日 星期一 11时31分56秒
 ************************************************************************/

#include<stdio.h>

/* Divide by power of 2. Assume 0 <= k < w -1 */
int divide_power2(int x, int k) {
	int w = sizeof(int) << 3;  // Conpute word size of bit;
	int msb = 1 << (w -1);  // Define the TMin;
	(x & msb) && (x = x + (1 << k) - 1);  // x < 0;
	return x >> k;
}
