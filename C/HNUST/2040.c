#include <stdio.h>
int main(void) {
    char ch;
    int s = 0, num;
    scanf("%d", &s);

    while (scanf("%c", &ch)) {
        if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '=') {
        switch (ch) {
            case '+':
                scanf("%d", &num);
                s += num;
                break;
            case '-':
                scanf("%d", &num);
                s -= num;
                break;
            case '*':
                scanf("%d", &num);
                s *= num;
                break;
        }

        if (ch == '/') {
            scanf("%d", &num);
            if (num == 0) {
                printf("ERROR");
                break;
            } 
            else s /= num;    
            }

            if (ch == '=') {
                printf("%d", s);
                break;
            }
        } else {
            printf("ERROR");
            break;
        }
    }
    return 0;
}