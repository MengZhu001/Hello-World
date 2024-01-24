#include <stdio.h>
int main(){
    // C99 为类型大小提供 %zd 转换说明
    printf("Type int has a size of %zd byte.\n",sizeof(int));
    printf("Type char has a size of %zd byte.\n",sizeof(char));
    printf("Type long has a size of %zd byte.\n",sizeof(long));
    printf("Type long long has a size of %zd byte.\n",sizeof(long long));
    printf("Type double has a size of %zd byte.\n",sizeof(double));
    printf("Type long double has a size of %zd byte.\n",sizeof(long double));
    
    return 0;
}


// Type int has a size of 4 byte.
// Type char has a size of 1 byte.
// Type long has a size of 8 byte.
// Type long long has a size of 8 byte.
// Type double has a size of 8 byte.
// Type long double has a size of 16 byte.