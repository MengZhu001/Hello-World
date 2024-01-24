#include <stdio.h>
int main(){
    int n,k;
    double sum_a = 0.0, sum_b = 0.0;
    int na = 0, nb = 0;
    int i = 1;
    scanf("%d %d", &n, &k);
    for(; i <= n; i++){
        if(i % k == 0){
            sum_a = sum_a + i;
            na++;
        }
        else{
            sum_b = sum_b + i;
            nb++;
        }
    }
    printf("%.1lf %.1lf\n",sum_a / na, sum_b / nb);
    return 0;
}