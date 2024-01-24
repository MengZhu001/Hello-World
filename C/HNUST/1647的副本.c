#include <stdio.h>

int main(void) {
    int n, m, max, min;
    scanf("%d", &n);
    scanf("%d", &m);
    max = min = m;
    for (int i = 1; i < n;i++){
        scanf("%d", &m);
        if (m > max)
            max = m;
        if (m < min)
            min = m;
    }
    printf("%d", max - min);
    return 0;

}

