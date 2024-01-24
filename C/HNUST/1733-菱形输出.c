#include <stdio.h>
void Diamond(int n, char ch){
    
    for (int i = 1; i <= n; i++) {
        for (int k = n - i; k > 0; k--)
            printf(" ");
        for (int j = 2 * i - 1; j > 0; j--)
            printf("%c", ch);
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int k = n - i; k > 0; k--)
            printf(" ");
        for (int j = 2 * i - 1; j > 0; j--)
            printf("%c", ch);
        printf("\n");
    }
}

int main(void) {
    int n, x;
    char ch;
    scanf("%d", &n);
    for (int e = 0; e < n; e++) {
        getchar(); // 丢弃上个输入的回车符
        ch = getchar();
        scanf("%d", &x);
        Diamond(x, ch);
    }
    return 0; 
}