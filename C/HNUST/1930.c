#include <stdio.h>
int main(){
    float a, b, c, score;
    scanf("%f%f%f", &a, &b, &c);
    if((a >= 0 && a <= 100) && (b >= 0 && b <= 100) && (c >= 0 && c <= 100))
    {
        score = a * 0.1 + b * 0.2 + c * 0.7;

        if(score <= 100 && score >= 60)
        {
            printf("Congratulations! You passed the exam!");
        }
        else if(score <= 60 && score >= 0)
        {
            printf("Sorry! You failed the exam!");}
    }
    else printf("Input Error!");

    return 0;
}






// 总评成绩 = 平时成绩*10% + 期中机试成绩*20% + 期末机试成绩*70%