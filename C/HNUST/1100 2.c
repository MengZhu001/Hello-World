// 判断素数
#include <stdio.h>
int IsPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2;i < n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n, x;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d", &x);

        if (IsPrime(x)) printf("Yes\n");
        else printf("No\n");
        n--;
    }

	return 0;
}
