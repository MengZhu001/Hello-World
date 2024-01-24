#include <stdio.h>
int main(){
    int n;
    double Sum = 1;
    scanf("%d", &n);
    
    for(int i = 2; i <= n; i++) Sum -= 1.0 / (i * i) ;

    
    printf("%.6lf", Sum);
    return 0;
}
