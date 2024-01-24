#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int k = i; k > 0; k--) {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}