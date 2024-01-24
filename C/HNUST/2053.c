// 顺序输出给定字符串中所出现过的大写英文字母，每个字母只输出一遍
#include <stdio.h>
#include <string.h>
int main(void) {
    char str[81];
    char ret_str[81] = {0};
    int n = 0;
    gets(str);
    for (int i = 0, k; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            for (k = 0; k <= n; k++) {
                if (str[i] == ret_str[k]) 
                    break;
            }
            if (k == n + 1) {
                ret_str[n] = str[i];
                n++;
            }
        }
    }
    if (!n) printf("Not Found");
    for (int i = 0; i < n; i++) {
        printf("%c", ret_str[i]);
    }
    return 0;
}