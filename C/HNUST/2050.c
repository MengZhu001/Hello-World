// 字符串中大写辅音字母的个数。
#include <stdio.h>
int main(void) {
    int n = 0;
    char ch;
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
                n++;
        }
    }
        
    printf("%d", n);
    return 0;
}