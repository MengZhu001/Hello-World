#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
void ReadString( char *s )
{
    int i;
    for( i=0;scanf("%c",s+i)!=EOF;i++)
    {
        if(*(s+i)=='#')
            break;
    }
}
/* Your function will be put here */

void StringCount( char *s ) {
    int A = 0, a = 0, spase = 0, numb = 0, other = 0, i = 0;
    while (1) {
        if (*(s + i) == '#') break;
        if (*(s + i) >= 'A' && *(s + i) <= 'Z') A++;
        else if (*(s + i) >= 'a' && *(s + i) <= 'z') a++;
        else if (*(s + i) >= '0' && *(s + i) <= '9') numb++;
        else if (*(s + i) == ' ') spase++;
        else other++;
        i++;
    }
    printf("%d %d %d %d %d", A, a, spase, numb, other);
}
