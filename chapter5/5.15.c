/*************************************************************************
    > File Name: 5.14.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月19日 星期二 16时11分11秒
 ************************************************************************/

#include<stdio.h>
/* Inner product. 6 x 6 loop unrolling */
void inner6(vec_ptr u, vec_ptr v, data_t *dest) {
	long i;
	long length = vec_length(u);
	long limit = length - 5;
	data_t *udata = get_vec_start(u);
	data_t *vdata = get_vec_start(v);
	data_t sum,accu0,accu1,accu2,accu3,accu4,accu5;
	sum = accu0 = accu1 = accu2 = accu3 = accu4 = accu5 = (data_t) 0;
	
	for(i = 0; i < limit; i += 6) {
		accu0 += udata[i] * vdata[i];
		accu1 += udata[i+1] * vdata[i+1];
		accu2 += udata[i+2] * vdata[i+2];
		accu3 += udata[i+3] * vdata[i+3];
		accu4 += udata[i+4] * vdata[i+4];
		accu5 += udata[i+5] * vdata[i+5];
	}
	sum = accu0 + accu1 + accu2 + accu3 + accu4 + accu5;

	while(i<length) {
		sum = sum + udata[i] * vdata[i];
	}
	*dest = sum;

}
