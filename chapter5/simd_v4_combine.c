/*************************************************************************
    > File Name: simd_v4_combine.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月09日 星期六 16时30分27秒
 ************************************************************************/
#include<stdio.h>
#include<vec.h>
data_t simd_vn_combine(vec_ptr v,data_t *dest,size_t accum_size) {
	long i,j;
	vec_t accums[accum_size];
	data_t *data = get_vec_start(v);
	int cnt = vec_length(v);
	data_t result = IDENT;
	int step_size = accum_size*VSIZE;

	/* Initialize all accum entries to IDENT */
	for(i=0; i<VSIZE; i++) {
		accums[0][i] = IDENT;
	}
	for(i=1; i<accum_size; i++) {
		accums[i] = accums[0];
	}
	/* single step until have memory alignment */
	while((((size_t) data) % VBYTES) != 0 && cnt) {
		result = result OP *data++;
		cnt--;
	}

	/* Step through data with VSIZE*4-way parallelism */
	while(cnt >= step_size){
		for(i=0; i<accum_size; i++) {
			vec_t chunk = *((vec_t *) (data+i*VSIZE));
			accums[i] = accums[i] OP chunk;
		}
		data += step_size;
		cnt -= step_size;
	}
	
	/* Single-step through remaining elements */
	while(cnt) {
		result = result OP *data++;
		cnt--;
	}

	/* Combine element of accumulator vector */
	for(i=0; i<accum_size; i++) {
		for(j=0; j<VSIZE; j++) {
			result = result OP accums[i][j];
		}
	}
	*dest = result;
	
}
