/*************************************************************************
    > File Name: simd_v4_combine.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月09日 星期六 16时30分27秒
 ************************************************************************/
#include<stdio.h>
#include<vec.h>
data_t simd_r4_combine(vec_ptr v,data_t *dest) {
	long i,j;
	data_t *data = get_vec_start(v);
	int cnt = vec_length(v);
	vec_t result;
	int step_size = 4*VSIZE;

	/* Initialize  result */
	result[0]=result[1]=result[2]=result[3] = IDENT;

	/* single step until have memory alignment */
	while((((size_t) data) % VBYTES) != 0 && cnt) {
		result[0] = result[0] OP *data++;
		cnt--;
	}

	/* Step through data with VSIZE*4-way parallelism */
	while(cnt >= step_size){
		vec_t chunk0 = *((vec_t *) data);
		vec_t chunk1 = *((vec_t *) data + VSIZE);
		vec_t chunk2 = *((vec_t *) data + VSIZE*2);
		vec_t chunk3 = *((vec_t *) data + VSIZE*3);
		result = result OP (chunk0 OP (chunk1 OP chunk2) OP chunk3);
		data += step_size;
		cnt -= step_size;
	}
	
	/* Single-step through remaining elements */
	while(cnt) {
		result[0] = result[0] OP *data++;
		cnt--;
	}

	/* Combine element of accumulator vector */
	for(i=1;i<VSIZE;i++) {
		result[0] = result[0] * result[i];
	}
	*dest = result[0];
	
}
