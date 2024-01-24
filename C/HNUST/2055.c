//  提取数字字符，转换成数
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    char str[81];
    char nums[81];
    int n = 0;
    long num;
    gets(str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nums[n] = str[i];
            n++;
        }
    }
    nums[n] = '\0';
    num = atol(nums);
    printf("%ld", num);
    return 0;

}