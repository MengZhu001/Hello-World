#include <stdio.h>
int main(void) {
    int first, second;
    printf("This program computes moduli.\n");
    printf("Enter an integer to sever as the second operand: ");
    scanf("%d", &second);
    printf("Now enter the first operand:");
    scanf("%d", &first);
    printf("%d %% %d is %d \n", first, second, first % second);
    while (1) {
        printf("Enter next number for first operand (<= 0 to quite):");
        scanf("%d", &first);
        if (first <= 0) {
            printf("Done\n");
            break;
        }
        printf("%d %% %d is %d \n", first, second, first % second);
    }
    return 0;
}