#include <stdio.h>
int main(void) {
    int n, nums[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n - 1; i++)
        nums[i] = nums[i + 1] - nums[i];

    for (int k = 0; k < n - 1; k++) {
        printf("%d", nums[k]);
        if ((k + 1) % 3 == 0) putchar('\n');
        else putchar(' ');
    }
    return 0;
}