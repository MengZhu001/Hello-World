#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, area, s;

    scanf("%lf%lf%lf", &a, &b, &c);
    
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("a=%f b=%f c=%f\n", a, b, c);
    printf("area=%f", area);

    return 0;
}
