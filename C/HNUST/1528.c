#include <stdio.h>

int main(void) {
    int a, b, c, d;
    char opt;
    while (scanf("%d%c%d=%d", &a, &opt, &b, &c) != EOF){

        switch (opt) {
        case '+':
            d = a + b;
            break;
        case '-':
            d = a - b;
            break;
        }
        if (c == d) 
            printf("Right\n");
        else 
            printf("Wrong\n");
    }
    return 0;
}