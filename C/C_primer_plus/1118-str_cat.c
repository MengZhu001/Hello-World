#include <stdio.h>
#include <string.h>
#define SIZE 80

// 读取一行输入并用空字符代替换行符，或者读取部分，并丢弃剩余部分。
char * s_gets(char * st, int n) {
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\n')
            i++;
        if (st[i] == '\n')
            st[i] = '\n';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

int main(void) {
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";

    puts("What is your favorite flower?");

    if (s_gets(flower, SIZE)) {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered!");
    puts("bye");

    return 0;
}
