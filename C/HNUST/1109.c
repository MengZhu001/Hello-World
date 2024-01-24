// 判断正整数n能分解成2个素数之和，并输出
#include <stdio.h>
#include <math.h>

// 判断素数
int IsPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2;i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int nums, i, flag;
    while (scanf("%d", &nums) != EOF && nums >= 4) {
        flag = 0;
        for (i = 2; i < nums / 2; i++) {
            if(IsPrime(i) && IsPrime(nums - i)) {
                printf("%d=%d+%d\n", nums, i, nums - i);
                flag = 1;
            }

        }
        if (!flag) printf("No answer\n");
        putchar('\n');
    }
    return 0;
}