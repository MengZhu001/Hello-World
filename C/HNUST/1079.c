#include<stdio.h>
#define PI 3.1415926
int main()
{
    double r,h,S,V;
    scanf("%lf,%lf", &r, &h);
    S = PI * r * r;
    V = PI * r * r * h;
    printf("S=%lf\n", S);
    printf("V=%lf", V);
    return 0;

} 