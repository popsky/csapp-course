/*************************************************************************
    > File Name: 3.60.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月14日 星期六 20时31分15秒
 ************************************************************************/

#include<stdio.h>
long loop(long x, long n) {
	long result =0;
	long mask;
	for(mask=1;mask>0;mask<<=(n&0xff)) {
		result |=(mask & x);
	}
	return result;
}
