#include <stdio.h>
int main(void) {
    int n;
    char floatNum[33];
    scanf("%s", floatNum);
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("%c", floatNum[0]);
            break;
        case 2:
            for (int i = 1; i < 9; i++) {
                printf("%c", floatNum[i]);
            }
            break;
        case 3:
            for (int i = 9; i < 32; i++) {
                printf("%c", floatNum[i]);
            }
    }
    return 0;
}