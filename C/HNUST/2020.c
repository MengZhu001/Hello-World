#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int f(int n, int d, int *ptr) {
	if (n % 10 == d)
        (*ptr)++;
    if (n <= 9)
        return n % 10;
    else f(n /10, d , ptr);
}

int CountDigit(int number, int digit){
    if (number < 0) number = -number;
    int c = 0;
    int * p = &c;
    f(number, digit, p);
    return c;
}

