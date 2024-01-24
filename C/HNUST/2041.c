#include <stdio.h>
#define ROW 4
#define COL 21
void FindLocalMax(int nums[][COL], int m, int n);
//void PointLocalMax(int nums[][COL], int i, int k);
void FillArray(int nums[][COL], int m, int n);
int main(void) {
    int m, n, nums[ROW][COL];
    scanf("%d%d", &m, &n);
    FillArray(nums, m, n);
    for (int i = 1; i < m - 1; i++)
        for (int k = 1; k < n - 1; k++ )
            FindLocalMax(nums, i, k);
    return 0;
}

void FillArray(int nums[][COL], int m, int n) {
    int i, k;
    for (i = 0; i < m; i++)
        for (k = 0; k < n; k++)
            scanf("%d", &nums[i][k]);

}

// void PointLocalMax (int num[][COL], int i, int k) {
//     for (int j = i - 1; j <= i + 1; j++) {
//         for (int z = k - 1; z <= k + 1; z++)
//             printf("%d", num[j][z]);
//         putchar('\n');
//     }
//     putchar('\n');
// }

void FindLocalMax(int nums[][COL], int i, int k) {
    if (nums[i][k] > nums[i + 1][k] && nums[i][k] > nums[i - 1][k] && nums[i][k] > nums[i][k - 1] && nums[i][k] > nums[i][k + 1]) {

        // PointLocalMax(nums, i, k);
        printf("%d %d %d", nums[i][k], i, k);
        putchar('\n');
    }
}
