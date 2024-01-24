#include <stdio.h>
#include <math.h>
// 提高对 math.h 库的熟悉度
int main(){
    double x, y;
    scanf("%lf", &x);
    if(x < 0){
        y = fabs(x) / 2.0;
        printf("y=%.6lf", y);
    }else if(x < 10){
        y = 3 + exp(x);
        printf("y=%.6lf", y);
    }else if(x < 20){
        y = log10(x);
        printf("y=%.6lf", y);
    }else if(x < 30){
        y = pow(x,1.5);
        printf("y=%.6lf", y);
    }else if(x < 50){
        y = sqrt(x) - 1;
        printf("y=%.6lf", y);
    }else{
        y = 3 * cos(x);
        printf("y=%.6lf", y);
    }
    return 0;
}