#include <stdio.h>
int main(){
    int n;
    double Sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) Sum += 1.0 / i;
    printf("%.6lf", Sum);
    return 0;
}
