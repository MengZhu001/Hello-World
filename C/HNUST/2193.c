

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n <= 5) printf("%d", n + 7);
    else {
        n = (n - 5) % 12;
        if(0 == n) n = 12;
        printf("%d", n);
    }
    return 0;
}