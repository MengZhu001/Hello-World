#include <stdio.h>
#define STLEN 14
int main(void) {
    char words[STLEN];
    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");
    return 0;
}

// 第一次读入 apple pie 比 fgets() 读入的短，因此存入数组 apple pie\n\0 
// 而在 puts() 显示该字符串时又会在末尾添加换行
// fputs() 在输出时不会添加换行符
// 第二行输入，超过大小限制，所以只读入 13 个字符，存入数组 strawberry sh\0

// Enter a string, please.
// apple pie
// Your string twice (puts(), then fputs()):
// apple pie

// apple pie
// Enter another string, please.
// strawberry shortcake
// Your string twice (puts(), then fputs()):
// strawberry sh
// strawberry shDone.