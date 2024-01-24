#include <stdio.h>

int main(void) {
    int n, nums[11];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &nums[i]);
    int temp, max;
    for (int i = 0; i < n; i++) {
        max = i; // 这一步很重要‼️
        for (int k = i; k < n; k++) {
            if (nums[max] < nums[k]) max = k;
        }
        temp = nums[max];
        nums[max] = nums[i];
        nums[i] = temp;
    }

    for (int k = 0; k < n; k++) {
        printf("%d", nums[k]);
        if (k == n - 1) putchar('\n');
        else putchar(' ');
    }
}