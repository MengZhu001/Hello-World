#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ) {
    int a, b, c;
    a = number / 100;
    b = (number / 10) % 10;
    c = number % 10;
    if (a * a * a + b * b * b + c * c * c == number)
        return 1;
    else return 0;
}
void PrintN( int m, int n ){
    for (int i = m + 1; i < n; i++)
    if (narcissistic(i))
        printf("%d\n", i);
}
