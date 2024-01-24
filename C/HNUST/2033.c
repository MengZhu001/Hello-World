#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse(int number) {
    if (number == 0) return 0;
    if (number > 0) {
        if (number <= 9) {
            return number;
        }
        printf("%d",number % 10);
        return reverse(number / 10);
    }
    else if (number < 0) {
            if (number % 10 == 0)
                number /= 10;

        printf("%d",number % 10);
        return reverse(-number / 10);
    }
    
}