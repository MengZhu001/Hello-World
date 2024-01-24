#include <stdio.h>
void To_Binary(unsigned long n){
    if(n >= 2) To_Binary(n / 2);// 处理下一位
    putchar(!(n % 2) ? '0' : '1');// 处理最低位
    return;
}
int main(void){
    unsigned long number;

    printf("Enter an integer (q to quit):\n");

    while(scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        To_Binary(number);

        putchar('\n');// 处理用户输入回车键
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}