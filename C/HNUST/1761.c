#include <stdio.h>
int add(int n) {
    int sum;
    if (n == 1)
        sum = 1;
    else
        sum = n + add(n-1);
        printf("%d", sum);

    return sum;
}
int main(void) {
    int n;
    scanf("%d", n);

    printf("%d", add(n));

    return 0;

}
