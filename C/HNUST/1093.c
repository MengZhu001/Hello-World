// 判断三角形类型

#include <stdio.h>
void WhatTriangle(int a,int b,int c){
    {
        if(a + b <= c || a + c <= b || c + b <= a ) printf("Can't make up of triangle\n");
        else if (a == b && b == c)  printf("Equilateral triangle\n");
        else if((a == b & b != c) || (a == c && b != c && a != c ) || (b == c && b != a && c != a) ) printf("Isoceles triangle\n");
        else if((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a)) printf("Right-angled triangle\n");
        else printf("General triangle\n");
    }


}
int main(void){
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    WhatTriangle(a, b, c);
    return 0;

}
