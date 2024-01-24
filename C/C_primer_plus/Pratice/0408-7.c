#include <stdio.h>
#include <float.h>
int main(void) {
    double a = 1.0 / 3.0;
    float b = 1.0 / 3.0;
    printf("%.3lf %.12lf %.16lf\n", a, a, a);
    printf("%.3f %.12f %.16f\n", b, b, b);
    printf("FLT_DIG = %d, DBL_DIG = %d", FLT_DIG, DBL_DIG);
    return 0;
}