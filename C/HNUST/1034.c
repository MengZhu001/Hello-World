// sum(m,n)
// Give two integers n and m, you should compute the sum of all the integers form n to m. 
// In other words, you should compute:


#include <stdio.h>
long long Sum(long long a, long long b) {
    long long sum = 0;
    long n;
    // 如果范围包含负数
    if (a * b < 0) {
        if (-a < b) 
            sum = (-a + 1) * (a + b) + (((a + b - 1) * (a + b)) / 2);
        else 
            sum = a * -(a + b) + (((a + b) + 1) * ((a + b)) / 2);

        return sum;
    }
    if (a * b >= 0) {
        if (a + b > 0) 
            sum = a * (b - a + 1) + ((b - a + 1) * (b - a) / 2);
        if (a + b < 0)
            sum = a * (b - a) + (((b - a -1) * (b - a)) / 2);
    }
    return sum;
}


int main(void){
    long long n, m, c;
    scanf("%ld", &c);

    for(int j = c; j > 0; j--){
        scanf("%ld%ld", &n, &m);
        printf("%lld\n\n", Sum(n, m));
        if (j == 1) {
            putchar('\n');
            break;
        }
    }
    return 0;

}
