#include <stdio.h>

 void play(int n, int m) {
    for (int i = 0; i < n; i++) {
        for(int j = 1; j <= m; j++) {
            if (m == 1 || j % 2 != 0)
                printf("%%");
            else
                printf("&");
        }
        printf("\n");
    }
 }

 int main(void) {
    int n , m;
    while (scanf("%d%d", &n, &m) != EOF) {
        play(n, m);
    }

    return 0;
 }
