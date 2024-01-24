#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
	
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

	/* 你的代码将被嵌在这里 */

void printdigits(int n) {
    int nums [100], i = 0;
    while (1) {
        nums[i] = n % 10;
        if ( n < 10) break;
        n /= 10;
        i++;
    }
    for (; i >= 0; i--)
        printf("%d\n", nums[i]);
    
}