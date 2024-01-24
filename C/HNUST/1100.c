#include <stdio.h>
#include <math.h>
int IsPrimeNumber(int n){
    for(int i = 2; i <= (int)sqrt(n); i++) if(!(n % i))
        return 0;
    return 1;
}
int main(void){
    int n,x;
    scanf("%d", &n);
    for(int j = 0; j < n; j++){
        scanf("%d", &x);
        if(x !=1 && x > 0){
            if(IsPrimeNumber(x)) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
