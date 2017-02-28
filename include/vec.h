/*************************************************************************
    > File Name: ../include/vec.h
    > Author: sukong
    > Mail: sukong@outlook.com
    > Author: ma6174
 ************************************************************************/
#define OP *
#define IDENT 1
#define data_t double
/* Number of bytes in a vector */
#define VBYTES 32

/* Number of elements in a vector */
#define VSIZE VBYTES/sizeof(data_t)

/* Vector data type */
typedef data_t vec_t __attribute__ ((vector_size(VBYTES)));
/* Create abstract data type for vector */
typedef struct {
	long len;
	data_t *data;
}vec_rec, *vec_ptr;

/* method define */
vec_ptr new_vec(long);

int get_vec_element(vec_ptr,long,data_t *);

long vec_length(vec_ptr);

data_t *get_vec_start(vec_ptr);
