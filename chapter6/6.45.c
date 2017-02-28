void transpose(int *dst, int *src, int dim) {
    int step = 4;
    int i,j,limit;
    limit = dim - step + 1;
    for(i = 0; i < limit; i+=step) {
        for(j = 0; j < limit; j+=step) {
            dst[j * dim + i] = src[i * dim + j ];
            dst[(j+1) * dim + i] = src[i * dim + j + 1];
            dst[(j+2) * dim + i] = src[i * dim + j + 2];
            dst[(j+3) * dim + i] = src[i * dim + j + 3];
            dst[]
        }
    }
}
