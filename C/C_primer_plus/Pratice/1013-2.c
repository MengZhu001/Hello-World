#include <stdio.h>
//  数组法拷贝
void copy_arr(double target[], double source[], int n);
// 指针表示法和指针自增
void copy_ptr(double *target, double *source, int n);

void copy_ptrs(double target[], double source[], double * end);

int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    for (int i = 0; i < 5; i++)
        printf("%lf", source[i]);
    putchar('\n');
    for (int i = 0; i < 5; i++)
        printf("%lf", target1[i]);
    putchar('\n');
    for (int i = 0; i < 5; i++)
        printf("%lf", target2[i]);
    putchar('\n');
    for (int i = 0; i < 5; i++)
        printf("%lf", target3[i]);
    putchar('\n');       
    return 0;
}

void copy_arr(double target[], double source[], int n) {
    for (int i = 0; i < n; i++) {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int n) {
    for (int i = 0; i < n; i++) {
        *target++ = *(source + i); 
    }
}

void copy_ptrs(double target[], double source[], double *end) {
    for (; source < end ;target++, source++) {
        *target = *source;
    }
}