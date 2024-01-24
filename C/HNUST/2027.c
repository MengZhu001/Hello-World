#include <stdio.h>
int main(void) {
    int n, nums[12], temp;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[n]) {
            temp = nums[n];
            for (int k = n; k > i; k--) {
                nums[k] = nums[k - 1];
            }
            nums[i] = temp;
            break;
        }
    }
    for (int i = 0; i <= n; i++)
        printf("%d ", nums[i]);
    return 0;
}