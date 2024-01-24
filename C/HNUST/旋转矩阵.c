// 旋转矩阵

#include <stdio.h>

int main(void) {
    int n, i = 0, row = 0, col = 0, count = 1;
    int nums[21][21] = {0};
    scanf("%d", &n);
    // while (i < 2 * n - 1) {
    while (n - i >= 0) {
        for (;col < n - 1 - i; col++) 
            nums[row][col] = count++;

        for (;row < n - 1 - i; row++) 
            nums[row][col] = count++;

        for (;col > i; col--) 
            nums[row][col] = count++;

        for (;row > i + 1; row--) 
            nums[row][col] = count++;

        // 因为前面循环判定条件的原因，使最后一个无法填充，所以
        if (n - i == 0) nums[row][col] = count;

        i++; 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%02d", nums[i][j]);
            if (j == n - 1) putchar('\n');
            else putchar(' ');
        }
    }
    return 0;
}