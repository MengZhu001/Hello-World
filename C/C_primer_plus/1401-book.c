#include <stdio.h>
#include <string.h>
char * s_gets(char *st, int n);
#define MAXTITL 41
#define MAXAUTL 31

// 创建一个结构模版，标记为 "book"
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}; // 模版结束

int main(void) {
    struct book library; // 把 library 声明为 book 类型变量（结构变量）

    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    
    printf("Now enter the author.\n");
    s_gets(library.author, MAXAUTL);

    printf("Now enter the value.\n");
    scanf("%f", &library.value);

    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s:\"%s\" ($%.2f)\n", library.title, library.author, library.value);
    puts("Done.");
}

char * s_gets(char *st, int n) {
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n'); // 在指定的字符串中找到某个字符第一次出现的位置，并返回地址；
        if (find)
            *find = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}