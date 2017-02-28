/*************************************************************************
    > File Name: simd_v1_combine.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月09日 星期六 15时17分04秒
 ************************************************************************/

#include<stdio.h>
#include<vec.h>


void simd_v1_combine(vec_ptr v, data_t *dest) {
	long i;
	vec_t accum;
	data_t *data = get_vec_start(v);
	long cnt = vec_length(v);
	data_t result = IDENT;

	/* Initialize all accum entries to IDENT */
	for(i = 0; i < VSIZE; i++) 
		accum[i] = IDENT;

	/* Single step until have memory alignment */
	while((((size_t) data) % VBYTES) != 0 && cnt) {
		result = result OP *data++;
		cnt--;
	}

	/* Step through data with VSIZE-way parallelism */
	while(cnt >= VSIZE) {
		vec_t chunk = * ((vec_t *) data);
		accum = accum OP chunk;
		data += VSIZE;
		cnt -= VSIZE;
	}

	/* Single-step through remaining elements */
	while(cnt) {
		result = result OP *data++;
		cnt--;
	}

	/* Combine elements of accumulator vector */
	for(i = 0; i < VSIZE; i++) 
		result = result OP accum[i];

	/* Store result */
	*dest = result;
}
int main() {
	vec_ptr v = new_vec(10);
	data_t result;
	simd_v1_combine(v,&result);
}
