#include <stdio.h>
int main(void) {
    double inch, cm;
    printf("This programming is inch to cm\n");
    printf("please enter inch:\n");
    scanf("%lf", &inch);
    cm = 2.54 * inch;
    printf("cm:%f cm\n",cm);
    return 0;
}