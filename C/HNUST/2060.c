#include <stdio.h>
#include <math.h>
double dist(double *x,double *y);
int main()
{
    int n,i;
    double x,y,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf",&x,&y);
        sum += dist(&x,&y);
    }
    printf("distance = %.4f\n",sum);
    return 0;
}
/*********** dist()函数定义 begin ***********/
double dist(double *x, double *y) {
    return sqrt(*x * *x + *y * *y);
}
/*********** dist()函数定义 end ***********/
