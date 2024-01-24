// 求余弦函数的近似值，e 为精度，x 为参数
#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}


double funcos(double e, double x) {
    double sum = 0, f, s = 1;
    int n = 0, flag = 1;
    while (1) {
        if (fabs(s) < e) break;

        // n!
        f = 1;
        for (int i = n; i >= 2; i--) f *= i;

        // 下一项
        s = pow(x, n) / f;
        sum += s * flag;

        n += 2;
        flag = -flag;

    }

    return sum;
}


// int f(int n) {
//     int sum = 1;
//     for (int i = n; i >= 2; i--) {
//         sum *= i;
//     }
//     return sum;
// }

// double funcos( double e, double x ) {
//     double s = 1, i = 2;
//     int flag = -1;
//     while (fabs(pow(x, i) / f(i)) >= e){
//         s += pow(x, i) / f(i) * flag;
//         i = i + 2;
//         flag = -flag;
//     }
//      s += pow(x, i) / f(i) * flag;

//     return s;
// }
