/*************************************************************************
    > File Name: combine4.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月08日 星期五 10时42分06秒
 ************************************************************************/

#include<stdio.h>
#include<vec.h>
/* Accumulate result in local variable */
void combine4(vec_ptr v, data_t *dest) {
	long i;
	long length = vec_length(v);
	data_t *data = get_vec_start(v);
	data_t acc = IDENT;

	for(i = 0; i < length; i++) {
		acc = acc OP data[i];
	}
	*dest = acc;
}
