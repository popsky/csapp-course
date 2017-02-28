/*************************************************************************
    > File Name: combine1.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月07日 星期四 10时48分20秒
 ************************************************************************/

#include<stdio.h>
#include<vec.h>

void combine1(vec_ptr v, data_t *dest) {
	long i;
	*dest = IDENT;
	for(i=0; i < vec_length(v); i++ ) {
		data_t val;
		get_vec_element(v,i,&val);
		*dest = *dest OP val;
	}
}
