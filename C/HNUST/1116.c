// 用递归实现指数函数
#include <stdio.h>

double getpower(int x, int y) {
    if (y) {
        if (y < 0)
            return (double) (1.0 / x) * getpower(x, y + 1);
        return (double)x * getpower(x, y - 1);
    }
    return 1.0;
}
int main(void) {
    int x, y;
    while (scanf("%d,%d", &x, &y) != EOF && x) {
        printf("%lf\n", getpower(x, y));
    }
    return 0;
}
