#include <stdio.h>
int main(void) {
    char ch;
    printf("Enter a capital letter:");
    scanf("%c", &ch);
    int n = ch - 'A';
    for (int i = 0; i <= n; i++) {

        for (int k = 1; k <= n - i; k++)
            printf(" ");
        for (int j = 0; j < i; j++) 
            printf("%c", 'A' + j);
        for (int g = i; g >= 0; g--)
            printf("%c", 'A' + g);
        putchar('\n');
    }
    return 0;
}