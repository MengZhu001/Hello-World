//输出给定范围[m, n]内每个完数
#include <stdio.h>
//factorsum须返回int number的因子和；
int factorsum( int number );
//逐行输出给定范围[m, n]内每个完数的因子累加形式的分解式，每个完数占一行
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int factorsum(int number) {
    int num = 0;
    if (number == 1) return 1;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) num += i;
    }
    if (num == number) return number;
    return 0;
}

void PrintPN(int m, int n) {
    int num, flag = 0, i;
    for (i = m; i <= n; i++) {
        num = factorsum(i);
        if (num) {
            flag = 1;
            printf("%d = 1", num);
            for (int k = 2; k < num; k++) {
                if (num % k == 0) printf(" + %d", k);
            }
            putchar('\n');
        } 
    }
    if (!flag) printf("No perfect number");
}

// 1 is a perfect number
// 1 = 1
// 6 = 1 + 2 + 3
// 28 = 1 + 2 + 4 + 7 + 14

// 1 is a perfect number
// 1 = 1
// 6 = 1 + 2  + 3 
// 28 = 1 + 2  + 4  + 7  + 14 