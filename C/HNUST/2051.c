// 统计字符出现次数
#include <stdio.h>
#include <string.h>
int main(void) {
    char str[80];
    char target;
    int count = 0;
    gets(str);
    target = getchar();
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) count++;
    }
    printf("%d", count);
    return 0;
}