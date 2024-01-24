#include <stdio.h>
int main(void) {
    double height;
    printf("Enter a height in centimeters:\n");
    scanf("%lf", &height);
    printf("%.1lf cm = %f feet, %f inches\n");
    while (1)

    if (height <= 0) {
        printf("bye!");
        break;
    }
}