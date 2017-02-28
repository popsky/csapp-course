/*************************************************************************
    > File Name: 2.74.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月07日 星期四 09时54分53秒
 ************************************************************************/

#include<stdio.h>

#define TMax 0x7fffffff
#define TMin (-TMax - 1)

/*Determine whether arguments can be subtracted without overflow */
int tsub_ok(int x, int y) {
	int w = sizeof(int)	>> 3; // Word size
	int tmin = 1 <<  (w - 1);	// TMin value
	int result = 1;	// Save the result
	int sum = x - y;
	int x_is_positive = (x & tmin) == 0;
	int y_is_positive = (y & tmin) == 0;
	int s_is_positive = (sum & tmin) == 0;
	x_is_positive && !y_is_positive && !s_is_positive && (result = 0);
	!x_is_positive && y_is_positive && s_is_positive && (result = 0);
	return result;
}

int main() {
	printf("1 - TMin can sub ? %d\n",tsub_ok(1,TMin));
	printf("-4 - TMin can sub? %d\n",tsub_ok(-4,TMin));
}
