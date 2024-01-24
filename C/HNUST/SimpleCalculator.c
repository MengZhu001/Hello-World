#include <stdio.h>

int main(void) {
    double r, a, b;
    char opt;

    scanf("%lf%c%lf", &a, &opt, &b);
    switch (opt) {
    case '+':
        r =  a + b;
        break;
    case '-':
        r = a - b;
        break;
    case '*':
        r = a * b;
        break;
    case '/':
        r = a / b;
        break;
    }
    printf("%lf", r);
    return 0;
}