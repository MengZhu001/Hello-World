#include <stdio.h>
#define MAXN 20
// 将输入字符串 char *t 中从第 m 个字符开始的全部字符复制到字符串 char *s 中。
// 若m超过输入字符串的长度，则结果字符串应为空串。
void strmcpy( char *t, int m, char *s );/*需要实现的函数*/
void ReadString( char s[] ); /* 由裁判实现，略去不表，即不用实现 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

	/* 你的代码将被嵌在这里 */


void strmcpy (char *t, int m, char *s) {
    int len = 0;
    while (t[len] != '\0') {
        len++;
    }
    if (m > len) {
        s[0] = '\0';
        return;
    }
    for (int i = m - 1, k = 0; i <= len; k++, i++) {
        s[k] = t[i];
    }
}