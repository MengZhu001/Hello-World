#include <stdio.h>
#include <math.h>
int main(){
    int a, b, sum = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++) sum += (int)fabs(i) % 10;
    printf("%d", sum);
    return 0;
}
