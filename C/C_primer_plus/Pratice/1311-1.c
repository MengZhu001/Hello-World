// 把文件压缩到原来的 1/3（不可逆的）
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(void) {
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;
    
    printf("Please enter the file name:\n");
    scanf("%s", name);

    // 输入
    if ((in = fopen(name, "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file \"%s\" \n", name);
        exit(EXIT_FAILURE);
    } 
    // 输出
    name[LEN - 5] = '\0';
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL) {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    // 处理数据
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);
    
    if (fclose(in) != 0 || fclose(out) != 0) 
        fprintf(stderr, "Error in closing files\n");
    
    return 0;
}