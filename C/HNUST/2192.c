#include <stdio.h>
int main(){
    double n;
    scanf("%lf", &n);
    n = 10000 - n;
    printf("%.2lf%%", n / 100);
    return 0;
}