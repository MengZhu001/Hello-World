#include <stdio.h>

int main(void) {
    int n, j;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        j = 1;
        for (int k = 1; k <= i; k++) {
            if (j < 10) {
                printf("%d", j++);
            } else {
                j = 1;
                printf("%d", j++);
            }
        }
        putchar('\n');
    } 
    return 0;
}
