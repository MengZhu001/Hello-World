#include <stdio.h>
int main(void) {
    int n, m, nums[52][52];
    scanf("%d%d", &m, &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &nums[i][j]);
    for (int k = 0; k < m; k++) {

        for (int j = n - 1; j >= 0; j--)
            for (int i = 0; i < n; i++)
                nums[i][j + 1] = nums[i][j];
            for (int i = 0; i < n; i++)
                nums[i][0] = nums[i][n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", nums[i][j]);
        }
        putchar('\n');
    }
    return 0;
}