// 把文件压缩到原来的 1/3（不可逆的）
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char *argv[]) {
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;

    // 检查命令行参数
    if (argc < 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    // 输入
    if ((in = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file\"%s\"", argv[1]);
        exit(EXIT_FAILURE);
    } 
    // 输出
    strncpy(name, argv[1], LEN - 5);
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