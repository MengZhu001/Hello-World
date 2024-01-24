#include <stdio.h>
#include <string.h>

int main(void) {
    char str[81];
    char nums[81];
    int n = 0;
    gets(str);
    for (int i = 0, k; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
                nums[n] = str[i];
                n++;
            }
        }
    int max;
    char temp;
    for (int i = 0; i < n; i++) {
        max = i;
        for (int k = i; k < n; k++) {
            if (nums[k] > nums[max]) 
                max = k;
        }
        temp = nums[max];
        nums[max] = nums[i];
        nums[i] = temp;
    }
    nums[n] = '\0';
    puts(nums);
    return 0;
}