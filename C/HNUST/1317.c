#include <stdio.h>
int Factorial(int x){
    int sum = 1;
    for(int i = x; i > 0; i--){
        sum *= i;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", Factorial(n));
    return 0;
}