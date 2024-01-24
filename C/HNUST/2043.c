#include <stdio.h>
int main(){
    int md[13] = {00,31,28,31,30,31,30,31,31,30,31,30,31};
    int year, mouth, day;
    scanf("%d/%d/%d", &year, &mouth, &day);
    for(int i = mouth - 1; i > 0; i--) day += md[i];

    if(((year % 4 == 0 && year % 100 != 0) ||(year % 400 == 0)) && mouth > 2) ++day;
    printf("%d", day);
    return 0;
    
}