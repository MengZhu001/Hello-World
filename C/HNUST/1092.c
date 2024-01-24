// 判断字符类型
#include <stdio.h>
int main(void){
    char n;
    scanf("%c", &n);
    if('1' <= n && n <= '9') printf("digital character");
    else if(('A'<= n && n <= 'Z') || ('a'<= n && n <= 'z')) printf("alphabetic character");
    else printf("other character");
    return 0;
}
