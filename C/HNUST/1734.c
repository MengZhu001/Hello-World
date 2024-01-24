#include <stdio.h>

void PrintOutlineRectangle(int length, int width, char ch) {
    // 打印第一列
    for (int i = 0; i < length; i++)
        printf("%c", ch);
    putchar('\n');
    for (int j = 0; j < width - 2; j++) {
        putchar(ch);
        // 打印空白
        for (int k = 0; k < length - 2; k++) putchar(' ');
        if (length > 1) putchar(ch);
        putchar('\n');
    }
    
    if (width > 1) {
        // 打印最后一列
        for (int i = 0; i < length; i++)
            printf("%c", ch);
            putchar('\n');
    }
    
}

int main(void) {
    int length, width;
    char ch;

    while (scanf("%d %d %c", &length ,&width, &ch) != EOF)
        PrintOutlineRectangle(length, width, ch);

    return 0;
}
