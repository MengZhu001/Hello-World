// 一句话中元音字母的个数
#include <stdio.h>
int vowel(char ch) {
if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    return 1;
else return 0;
}

int main(void) {
    char ch;
    int count = 0;
    while (scanf("%c", &ch) != EOF) {
        count += vowel(ch);
        if (ch == '\n') {
            printf("%d\n", count);
            count = 0;
        }
    }
    return 0;
}
