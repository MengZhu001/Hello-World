int ArrayShift( int a[], int n, int m ) {
    int temp;
    for (int i = 0; i < m; i++) {
        temp = a[n - 1];
        for (int k = n - 1; k > 0; k--) {
            a[k] = a[k - 1];
        }
        a[0] = temp;
    }
}
