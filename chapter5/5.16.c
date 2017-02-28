/*************************************************************************
    > File Name: 5.14.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月19日 星期二 16时11分11秒
 ************************************************************************/

#include<stdio.h>
/* Inner product. 6 x 1a loop unrolling */
void inner7(vec_ptr u, vec_ptr v, data_t *dest) {
	long i;
	long length = vec_length(u);
	long limit = length - 5;
	data_t *udata = get_vec_start(u);
	data_t *vdata = get_vec_start(v);
	data_t sum;
	sum =  (data_t) 0;
	
	for(i = 0; i < limit; i += 6) {
		sum = sum +( udata[i] * vdata[i]  + udata[i+1] * vdata[i+1] + udata[i+2] * vdata[i+2] + udata[i+3] * vdata[i+3] + udata[i+4] * vdata[i+4] + udata[i+5] * vdata[i+5]);
	}

	while(i<length) {
		sum = sum + udata[i] * vdata[i];
	}
	*dest = sum;

}
