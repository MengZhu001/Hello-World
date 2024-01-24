// 进制转换
#include <stdio.h>

void DectoBin(int n);

int main(void) {
    int n; 
    while (scanf("%d", &n) != EOF){
        DectoBin(n);
        putchar('\n');
    }
    return 0;
}

void DectoBin(int n) {
    if (n >= 2) DectoBin(n / 2);
    printf ("%d", n % 2);
}