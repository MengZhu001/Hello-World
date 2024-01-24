#include <stdio.h>
#define AYYTOSS 31560000
int main(){
    int age;
    long sce;
    printf("please type your age:\n");
    scanf("%d", &age);
    sce = age * AYYTOSS;
    printf("your age to sec is : %lds",sce);
    return 0;
}