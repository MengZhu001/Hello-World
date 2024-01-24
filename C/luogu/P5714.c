#include <stdio.h>
int main(){
    double mass, height, bmi;
    scanf("%lf%lf", &mass, &height);
    bmi = mass / (height * height);
    if(bmi < 18.5) printf("Underweight");
    if(bmi >= 18.5 && bmi < 24) printf("Normal");
    if(bmi >= 24){
        printf("%.6g\n", bmi);
        printf("Overweight");
    } 
    return 0;
}