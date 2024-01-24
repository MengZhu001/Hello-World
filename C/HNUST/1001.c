// 两数之和

#include <stdio.h>
int add(int a, int b){// 不用加法实现加法，加法器的逻辑
    if(!a) return b;
    return add((a & b)<< 1, a ^ b);
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", add(a, b));
    return 0;
}