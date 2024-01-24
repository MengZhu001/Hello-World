#include <stdio.h>
void Print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("@");
        }
        putchar('\n');
    }
}
int main(void){
    int n;
    scanf("%d", &n);
    Print(n);
    return 0;
}
