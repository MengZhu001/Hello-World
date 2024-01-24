#include <stdio.h>

int main(void) {
    int n, num, min, max;
    scanf("%d %d", &n, &num);
    max = min = num;
    n--;
    while (n--) {
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }
    printf("%d", max - min);
    return 0;
}









// #include <stdio.h>
// int Max(int nums[]);
// int Min(int nums[]);
// int main(void){
//     int n;
//     int nums[10000];
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &nums[i]);
//     }
//     printf("%d", Max(nums) - Min(nums));
    
//     return 0;
// }

// int Max(int nums[]) {
//     int top = nums[0], seek;
    
// }

// int Min(int nums[]) {
//     int low = nums[0], seek;
// }