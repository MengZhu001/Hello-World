// 将矩阵旋转
#include <stdio.h>
int main(void) {
    int m, n, nums[101][101];

    while(scanf("%d%d", &n, &m) != EOF) {
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                scanf("%d", &nums[i][j]);
            }
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++) {
                printf("%d ", nums[j][i]);
            }
            putchar('\n');
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                printf("%d ", nums[i][j]);
            }
            putchar('\n');
        }
    }
    return 0;

}