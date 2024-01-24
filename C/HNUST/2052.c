// 字符串字母大小写转换

#include <stdio.h>
int main(void) {
    char str [101];
    char ch;
    int i = 0;
    while ((ch = getchar()) != '#' && i < 101) {
        if (ch >= 'a' && ch <= 'z') {
            str[i] = 'A' + ch - 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            str[i] = 'a' + ch - 'A';
        }
        else str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("%s", str);
    return 0;
}