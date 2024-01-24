#include <stdio.h>
int main(void) {
    int n, nums[11];
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
        scanf("%d", &nums[i]);
    for (int k = 1; k <= n; k++) {
        printf("%d", nums[k]);
        if (k == n) putchar('\n');
        else putchar(' ');
    }
    return 0;
}