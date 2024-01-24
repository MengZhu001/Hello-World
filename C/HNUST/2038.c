#include <stdio.h>

double f(int n) {
    double sum = 1;
    for (int i = n; i >= 2; i--) {
        sum *= i;
    }
    return sum;
}

int main(void) {
    double eps, s = 1, p = 1, i = 1;
    double m = 1;
    scanf("%le", &eps);
    while (p > eps) {
        m *= 2 * i + 1;
        p = f(i) / m;
        i++;
        s += p;
        // if (p <= eps) break;
    }


    printf("PI = %.7lf", 2 * s);
    return 0;
    
}