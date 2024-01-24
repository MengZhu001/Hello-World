#include <stdio.h>


void deny()
{
    printf("Which nobody can deny!");//这里是声明和定义在一起
    
}

void jolly();//可以先声明函数，再定义

int main(){
    printf("For he's a jolly good fellow!\n");
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly()
{
    printf("For he's a jolly good fellow!\n");
}
