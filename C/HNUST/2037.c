// 给定两个均不超过9的正整数a和n，要求编写函数求a+aa+aaa++⋯+aa⋯a（n个a）之和。
#include <stdio.h>
// 返回的是n个a组成的数字
int fn( int a, int n );
// SumA返回要求的和
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

/* 你的代码将被嵌在这里 */

int fn(int a, int n) {
    int s = 0, p;
    for (int i = 1; i <= n; i++) {
        p = a;
        for (int j = 1; j < i; j++) {
            p *= 10;
        }
        s += p;
    }
    return s;
}

int SumA(int a, int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += fn(a, i);
    }
    return s;
}