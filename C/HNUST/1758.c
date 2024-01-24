// 求二位数组元素中的最大值
#include <stdio.h>
int main(void) {
    int m, n, nums[101][101], max;
    while (scanf("%d,%d", &m, &n)) {
        if (m || n) {
            
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    scanf("%d", &nums[i][j]);

            max = nums[0][0];        
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    if (nums[i][j] > max) 
                        max = nums[i][j];
            
        }else break;
    }
    printf("%d\n", max);
    return 0;
}