// 计算 e 的近似值

#include <stdio.h>
int main(void) {
    int n;
    double psum, sum = 2;
    scanf("%d", &n);
    for (int i = 2; i <=n; i++) {
        psum = 1;
        for (int j = 2; j <= i; j++) {
            psum *= j;
        }
        sum += 1.0 / psum;
    }
    printf("e=%.8lf", sum);
    return 0;
}
