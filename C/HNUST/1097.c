// 成绩评级

#include <stdio.h>
void WhatGrade(float n){
    if(0 >= n || n >= 100) printf("Error");
    else if(n < 60.0) putchar('E');
    else if(n < 70) putchar('D');
    else if(n < 80) putchar('C');
    else if(n < 90) putchar('B');
    else if(n <= 100) putchar('A');
}

int main(void){
    float n;
    while(scanf("%f", &n) != EOF){
        WhatGrade(n);
        putchar('\n');
    }
    return 0;
}
