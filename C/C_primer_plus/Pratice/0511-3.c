#include <stdio.h>
int main(void) {
    int days;
    while(1) {
    printf("Please enter days:");
    scanf("%d", &days);
    if (days <= 0) break;
    printf("%d days are %d weeks, %d days\n", 
            days, days / 7, days % 7);
    }
    return 0;
}