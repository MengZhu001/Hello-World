#include <stdio.h>
int main(void) {
    int n, x;
    int count = 0, temp;
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; i++ ) {
        temp = i;
        while (1) {
            if (temp < 10) {
                if ( temp == x) {
                    count++;
                    break;
                } else break;
            }
            while (temp >= 10) {
                if (temp % 10 == x) count++;
                temp /= 10;
            }
        }
    }
    printf("%d", count);
    return 0;
}