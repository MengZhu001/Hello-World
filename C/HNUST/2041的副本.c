#include <stdio.h>
int main(void) {
    int m, n, nums[20][21];
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int k = 0; k < n; k++)
            scanf("%d", &nums[i][k]);

    int flag = 1;
    for (int i = 1; i < m - 1; i++)
        for (int k = 1; k < n - 1; k++ )
            if (nums[i][k] > nums[i + 1][k] && nums[i][k] > nums[i - 1][k] && nums[i][k] > nums[i][k - 1] && nums[i][k] > nums[i][k + 1]) {
            printf("%d %d %d", nums[i][k], i + 1, k + 1);
            putchar('\n');
            flag = 0;
            }
    if (flag) printf("None %d %d", m, n);
    return 0;
}
