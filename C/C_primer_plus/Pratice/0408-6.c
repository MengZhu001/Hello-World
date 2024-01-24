#include <stdio.h>
int main()
{
    char firstName[100],lastName[100];
    int len1, len2;
    printf("please enter your first name:\n");
    scanf("%s", firstName);
    printf("please enter your last name:\n");
    scanf("%s", lastName);
    

    len1 = printf("%s", firstName);
    len2 = printf("%s", lastName);
    printf("\n%*d", len1, len1);
    printf("%*d\n", len2, len2);

    len1 = printf("%s", firstName);
    len2 = printf("%s", lastName);
    printf("\n%*d", -len1, len1);
    printf("%*d", -len2, len2);

    return 0;
}