#include <stdio.h>
#define SIZE 20
int main(void) {
    char firstName[SIZE], lastName[SIZE];
    printf("Please enter your first name:");
    scanf("%s", firstName);
    printf("Please enter your last name:");
    scanf("%s", lastName);
    printf("%s,%s", firstName, lastName);
    return 0;
}