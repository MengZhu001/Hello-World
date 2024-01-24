#include <stdio.h>

void Mult_Table(int n) {
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%-4d", i, j, i * j);
        }
        putchar('\n');
    }
}

int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        Mult_Table(n);
    }
    return 0;
}
