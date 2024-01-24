#include <stdio.h>
#define STLEN 80
int main(void) {
    char words[STLEN];

    puts("Enter a string, please.");
    gets(words);
    printf("Your sting twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    return 0;
}

// gets() 读取一整行输入，直到遇到换行符，丢弃换行符（放回缓存区？）
// 在读入的字符后面添加一个空字符，形成 C 字符串，存储
// 简单易用，不检查输入的字符串是否超出指定的目标空间

// put() 显示字符串，并在末尾添加换行符（会改变活动位置）。

// Enter a string, please.
//// warning: this program uses gets(), which is unsafe.
// I want to learn about string theory!
// Your sting twice:
// I want to learn about string theory!
// I want to learn about string theory!
// Done.