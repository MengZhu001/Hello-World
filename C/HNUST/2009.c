#include <stdio.h>

void Min(int n) {
    int m, min;
    scanf("%d", &m);
    min = m;
    for (int i = 1; i < n; i++) {
        scanf("%d", &m);
        if (m < min) min = m;
    }
    printf("%d", min);
}
int main(void) {
    int n;
    scanf("%d", &n);
    Min(n);
    return 0;
}
