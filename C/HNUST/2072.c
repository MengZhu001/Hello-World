#include <stdio.h>
int main(void) {
    int n, nums[101],b[101] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int temp, flag = 0;
    for (int i = 0; i < n; i++) {
        temp = nums[i];
            if (temp < 0) {
                temp = -temp;
                flag = 1;
            }
            while (temp >= 10) {
                b[i] = b[i] * 10 + temp % 10;
                temp /= 10;
            }
            b[i] = b[i] * 10 + temp;
            if (flag) {
                b[i] = -b[i];
                flag = 0;
            }
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > b[max]) max = i;
    }
    printf("%d", nums[max]);
    return 0;
}