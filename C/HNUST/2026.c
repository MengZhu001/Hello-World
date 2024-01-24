#include <stdio.h>
int main(void) {
    int n, nums[11], max, min, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    max = min = 0;

    for (int i = 0;i < n; i++) 
        if (nums[min] > nums[i]) min = i;
    
    temp = nums[min];
    nums[min] = nums[0];
    nums[0] = temp;

    for (int i = 0;i < n; i++) 
        if (nums[max] < nums[i]) max = i; 

    temp = nums[max];
    nums[max] = nums[n - 1];
    nums[n - 1] = temp;

    for (int k = 0; k < n; k++) {
        printf("%d", nums[k]);
        if (k == n - 1) putchar('\n');
        else putchar(' ');
    }
    return 0;
}