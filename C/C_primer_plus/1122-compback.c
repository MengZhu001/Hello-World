// 本程序不是书上的，与书上不同
#include <stdio.h>
#include <string.h>

#define SIZE 40

int main(void) {
    char str1[SIZE], str2[SIZE];
    puts("Compare two string\nPlease enter two string");

    while  (scanf("%s%s", str1, str2) != EOF){
        printf("the function strcmp() return : %d \n", strcmp(str1, str2));
    }

    return 0;
}

// 实验结论：
// 将字符串的每一个字符 ASCII 相加