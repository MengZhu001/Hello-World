#include <stdio.h>
#define SIZE 10
struct info {
    char name[SIZE];
    float wage;
};
int main(void) {
    struct info teacher[10];
    float baceWage, floatWage, expend;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s%f%f%f", teacher[i].name, &baceWage, &floatWage, &expend);
        teacher[i].wage = baceWage + floatWage - expend;
    }
    for (int i = 0; i < n; i++) {
        printf("%s %.2f\n", teacher[i].name, teacher[i].wage);
    }
    return 0;
}