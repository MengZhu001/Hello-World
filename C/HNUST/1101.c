// 区间 [0, n] 中素数的个数
#include <stdio.h>
int IsPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2;i < n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n, s = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        s += IsPrime(i);
    }
    printf("%d", s - 1);

	return 0;
}

