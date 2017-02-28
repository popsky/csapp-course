/*************************************************************************
    > File Name: combine3.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月07日 星期四 13时28分32秒
 ************************************************************************/

#include<stdio.h>
#include<vec.h>
/* Direct access to vector data */
void combine3(vec_ptr v, data_t *dest) {
	long i;
	long length = vec_length(v);
	data_t *data = get_vec_start(v);

	*dest = IDENT;
	for(i = 0; i < length; i++) {
		*dest = *dest OP data[i];
	}
}
