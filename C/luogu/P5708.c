#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, p, area;
    scanf("%lf%lf%lf",&a , &b, &c);
    p = 0.5 * (a + b + c);
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf", area);
    return 0;
    
}