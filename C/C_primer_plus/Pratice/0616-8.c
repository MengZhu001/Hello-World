#include <stdio.h>
int main(void) {
    double a, b;
    printf("please enter two float number:\n");
    while (scanf("%lf %lf", &a, &b) != EOF) {
        printf("%lf\n", (a - b) / (a * b));
    }
    return 0;
}