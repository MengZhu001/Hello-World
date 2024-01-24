// 输出 n 层 ch 为填充的三角形

#include <stdio.h>

int main(void) {
    int n;
    char ch;
    scanf("%d %c", &n, &ch);
    for (int i = 1; i <= n; i++) {
        for (int k = i; k >= 1; k--) {
            printf("%c", ch);
        }
        putchar('\n');
    }
    return 0;
}
