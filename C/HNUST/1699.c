#include <stdio.h>
int main(){
    int md[13] = {00,31,28,31,30,31,30,31,31,30,31,30,31};
    int year, mouth, day;
    scanf("%d%d%d", &year, &mouth, &day);
    for(int i = mouth - 1; i > 0; i--) day += md[i];

    if(((year % 4 == 0 && year % 100 != 0) ||(year % 400 == 0)) && mouth > 2) ++day;
    printf("%d", day);
    return 0;
    
}


// 普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
// 世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。
// 来自百度词条：https://baike.baidu.com/item/%E9%97%B0%E5%B9%B4/27098
