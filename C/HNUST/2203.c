#include <stdio.h>

struct students
{
    int  number;
    char name[20];
    int score[4];
    int sum;
};
int main(void) {
    struct students  student[10];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d %s", &student[i].number, student[i].name);
        student[i].sum = 0;
        for (int k = 0; k < 3; k++) {
            scanf("%d", &student[i].score[k]);
            student[i].sum += student[i].score[k];
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (student[max].sum < student[i].sum) max = i;
    }
    printf("%s %d", student[max].name, student[max].sum);
    return 0;
}