
#include <stdio.h>
int main(void) {
    int n, index;
    scanf("%d", &n);
    for (int i = 0, index = 1; i < n; i++) {
        for (int k = 0; k < n; k++) {
            printf("%02d", index++);
        }
        putchar('\n');
    }
    return 0;
}