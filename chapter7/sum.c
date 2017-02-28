int test();

int sum(int *a, int n) {
    int i, s = 0;
    for(i = 0; i < n; i++) {
        s += a[i];
    }
    test();
    return s;
}
