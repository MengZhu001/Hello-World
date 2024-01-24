#include <stdio.h>
#include <string.h>
int main(void) {
    char str[101];
    int n, index = 0;
    char ch;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        while ((ch = getchar()) != '\n') {
            str[index] = ch;
            index++;
        }
        if (i < n - 1) {
            str[index] = '_';
            index++;
        }
    }
    str[index] = '\0';
    printf("%s", str);
    return 0;
}