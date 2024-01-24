#include <stdio.h>

int main(void) {
    double number;
    printf("Please enter a float number:");
    scanf("%lf", &number);
    printf("The input is %g or %e .\n", number, number);
    printf("The input is %lf or %E .", number, number);
    return 0;
        
}