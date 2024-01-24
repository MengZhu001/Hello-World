#include<stdio.h>

int odd_sum(int m, int n)
{
    int odd_sum = 0;
    for(int i = ((m % 2 == 0)? m:m + 1); i <= n; i += 2){
        odd_sum += i * i;
    }

    return odd_sum;
}
int event_sum(int m, int n);

int main(void)
{
    int m, n;
    while(scanf("%d%d", &m, &n) != EOF){
    printf("%d", odd_sum(m, n));
    printf(" %d\n", event_sum(m, n));
}
    return 0;
}

int event_sum(int m, int n){
        int event_sum = 0;
    for(int i = ((m % 2 == 0)? m + 1:m); i <= n; i += 2){
        event_sum += (i * i * i);
    }
    return event_sum;
}
