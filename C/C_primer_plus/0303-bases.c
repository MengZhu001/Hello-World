//以十进制、八进制、十六进制打印十进制数100
#include <stdio.h>
int main()
{
    int x = 100;
    
    printf("dec = %d; octal = %o; hex = %x\n",x,x,x);//直接打印
    printf("dec = %d; octal = %#o; hex = %#x\n",x,x,x);//打印前缀

    return 0;
}