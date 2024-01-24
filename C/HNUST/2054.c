#include <stdio.h>
#include <string.h>
int main(void) {
    char str[81];
    char ret_str[81];
    int n = 0;
    gets(str);
    // 字符串去重 2053.c
    for (int i = 0, k; i < strlen(str); i++) {
        for (k = 0; k <= n; k++) {
            if (str[i] == ret_str[k]) 
                break;
        }
        if (k == n + 1) {
            ret_str[n] = str[i];
            n++;
        }
    }
    // 选择排序
    char temp;
    int min = 0;
    for (int i = 0, k; i < n; i++) {
        min = i;
        for (k = i; k < n; k++)
            if (ret_str[k] < ret_str[min]) min = k;
    
        temp = ret_str[i];
        ret_str[i] = ret_str[min];
        ret_str[min] = temp;
    }
    ret_str[n] = '\0';
    
    printf("%s", ret_str);
    return 0;
}