#include <stdio.h>
int main(void){
    int a = 0, day = 1;
    scanf("%d", &a);

    while(a != 1){
        a = a / 2;
        day++;
    }
    printf("%d", day);
    return 0;
}