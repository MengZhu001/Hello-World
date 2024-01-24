#include <stdio.h>
double p(int n, int x);
int main(void) {
    int n, x;
    while (scanf("%d,%d", &n, &x) && n >= 0) {
        printf("%lf\n", p(n, x));
    }
    return 0;
}

double p(int n, int x) {
    if (n < 1) return 1;
    if (n == 1) return x;
    return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
}
