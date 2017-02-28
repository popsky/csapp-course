/*************************************************************************
    > File Name: switch_eg_impl.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月03日 星期二 09时48分32秒
 ************************************************************************/

#include<stdio.h>
void switch_eg_impl(long x, long n, long *dest) {
	/* Table of code pointers */
	static void *jt[7] = {
		&&loc_A, &&loc_def, &&loc_B,
		&&loc_C, &&loc_D, &&loc_def,
		&&loc_D
	};
	unsigned long index = n - 100;
	long val;
	
	if(index > 6)
		goto loc_def;
	/* Multiway branch */
	goto *jt[index];

loc_A:	/* Case 100 */
	val = x * 13;
	goto done;
loc_B:	/* Case 102 */
	x = x + 10;
	/* Fall through */
loc_C:
	val = x + 11;
	goto done;
loc_D:	/* Cases 104, 106 */
	val = x * x;
	goto done;
loc_def:	/* Default case */
	val = 0;
done:
	*dest = val;

}
