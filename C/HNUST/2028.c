#include <stdio.h>
int main(void) {
    int n, nums[1001], num[1001] = {0}, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++) {
        while (1) {
            temp = nums[i] % 10;
            num[temp]++;
            if (nums[i] < 10) break;
            nums[i] /= 10;
        }
    }
    int max = num[0];
    for (int i = 0; i < 1001; i++) {
        if (max < num[i]) max = num[i];
    }
    printf("%d:", max);
    for (int i = 0; i < 1001; i++) {
        if (max == num[i]) {
           printf(" %d", i);
        }
    }
    return 0;


}
