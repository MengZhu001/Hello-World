// pritnf() 函数的返回值
#include <stdio.h>
int main(void){
    int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);
    return 0;
}
// 通常返回打印字符的个数
// 当输出错误时，返回一个负值