#include <stdio.h>
double min (double x, double y) {
    if (x > y) return y;
    return x;
}
int main(void) {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%lf", min (a, b));
    return 0;
}