/*************************************************************************
    > File Name: 5.13.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月19日 星期二 16时07分53秒
 ************************************************************************/

#include<stdio.h>
#include<vec.h>

/* Inner product. Accumulate in temporary */
void inner4(vec_ptr u, vec_ptr v, data_t *dest) {
	long i;
	long length = vec_length(u);
	data_t *udata = get_vec_start(u);
	data_t *vdata = get_vec_start(v);
	data_t sum = (data_t) 0;

	for(i = 0; i < length; i++ ) {
		sum = sum + udata[i] * vdata[i];
	}
	*dest = sum;
}
