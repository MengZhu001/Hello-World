#include <stdio.h>
int main()
{
    int n, i, s;
    while(scanf("%d", &n) != EOF)
    {
        s = 0;
        for(i = 1; i <= n; i++) s += i;
        printf("s=%d\n", s);
    }
    return 0;
}