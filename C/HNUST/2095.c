#include <stdio.h>
#define MAXN 20
// 函数delchar的功能是将字符串str中出现的所有c字符删除。
void delchar( char *str, char c );
void ReadString( char s[] ) ;/* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

	/* 你的代码将被嵌在这里 */


void delchar (char *p, char c) {
    char temp[MAXN];
    int index = 0;
    for (int k = 0; *(p + k) != '\0'; k++) {
        if (p[k] != c) {
            temp[index++] = p[k];
        }
    }
    for (int i = 0; i < index; i++)
        p[i] = temp[i];
    p[index] = '\0';
}

void ReadString(char s[]) {
    gets(s);
}

