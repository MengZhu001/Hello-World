// 给定五个数，这五个数排列组合，
// 为一个三位数和一个两位数，使乘积最大

#include <stdio.h>

int main(void) {
    int nums[6], a, b, c;
    for (int i = 0; i < 5; i++)
        scanf("%d", &nums[i]);

    // 将给定的五个数，进行排序，这里是选择排序
    int temp, max;
    for (int i = 0; i < 5; i++) {
        max = i;
        for (int k = i; k < 5; k++) 
            if (nums[max] < nums[k]) max = k;

        temp = nums[max];
        nums[max] = nums[i];
        nums[i] = temp;
    }

    a = nums[0] * 100 + nums[1] * 10 + nums[4];
    b = nums[2] * 10 + nums[3];

    printf("%d", a * b);
    return 0;
}