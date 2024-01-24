#include <stdio.h>
#define SIZE 20
struct info {
    char name[SIZE];
    float wage;
};
int main(void) {
    struct info teacher[10];
    int baceWage, floatWage, expend;
    int n;
    scanf("n=%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s%d%d%d", teacher[i].name, &baceWage, &floatWage, &expend);
        teacher[i].wage = baceWage + floatWage - expend;
    }
    for (int i = 0; i < n; i++) {
        printf("%s:%.2f\n", teacher[i].name, teacher[i].wage);
    }
    return 0;
}