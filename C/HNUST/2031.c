#include <stdio.h>
int main(void) {
    int n, num, nums[1001] = {0}, counts[1001] = {0}, index = 0;
    scanf("%d", &n);
    for(int i = 0, k; i < n; i++) {
        scanf("%d", &num);
        for (k = 0; k < index; k++) {
            if (num == nums[k]) {
                counts[k]++;
                break;
            }
        }
        if (k == index) {
            nums[index] = num;
            counts[index]++;
            index++;
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (counts[i] > counts[max]) max = i;
    }
    printf("%d %d", nums[max], counts[max]);
    return 0;
}
