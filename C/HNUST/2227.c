// 输出 m * n 星

#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int k = 0; k < n; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}