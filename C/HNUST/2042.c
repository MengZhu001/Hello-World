#include <stdio.h>

int main(void) {
    int n, m, nums[11][11], s;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &nums[i][j]);
    
    for (int i = 0; i < n; i++) {
        s = 0;
        for (int j = 0; j < m; j++)
            s += nums[i][j];
        printf("%d\n", s);
    }
    return 0;
}