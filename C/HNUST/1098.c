// 问题 D: 实验2-10：分段函数（仿竞赛题）
#include <stdio.h>
#include <math.h>

double Function(double x){
    double y = 0.0;
    if(x < 0) y = fabs(x) / 2.0;
    else if(x < 10) y = 3 + exp(x);
    else if(x < 20) y = log10(x);
    else if(x < 30) y = pow(x,1.5);
    else if(x < 50) y = sqrt(x) - 1;
    else y = 3 * cos(x);
    return y;
}

int main(void){

    double x;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf", &x);
        printf("y=%.6lf\n", Function(x));    
    }
    return 0;
}

