#include <stdio.h>
#define BASE_PAY 10
#define OVER_PAY 15
int main(void) {
    double totalTime, totalPay;
    printf("Enter work time of a week:\n");
    scanf("%lf", &totalTime);
    if (totalPay <= 40)
        totalPay = totalTime * BASE_PAY;
    else totalPay = 
}