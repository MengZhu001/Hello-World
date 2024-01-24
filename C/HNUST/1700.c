#include <stdio.h>
int main()
{
    double c, f;
    scanf("%lf", &f);
    c = 0.555555 * (f - 32);
    printf("%.2lf", c);
    return 0;
}