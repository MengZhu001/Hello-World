#include <stdio.h>
int main(void) {
    int n, s = 0, as = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            as *= j;
        }
        s += as;
        as = 1;
    }
    printf("%d", s);
    return 0;
}
