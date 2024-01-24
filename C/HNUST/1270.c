#include <stdio.h>
#define N 100
struct student {
    char num[10];
    char name[10];
    int score[4];
    int total;
} stu[N];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%s %s", stu[i].num, stu[i].name);
        stu[i].total = 0;
        for (int k = 0; k < 3; k++) {
            scanf("%d", &stu[i].score[k]);
            stu[i].total += stu[i].score[k];
        }
    }
    // Bug: 如果第一个刚好是最大且有不及格就错误
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (stu[i].score[0] > 60 && stu[i].score[1] > 60 && stu[i].score[2] > 60)
            if (stu[max].total < stu[i].total) max = i;
    }
    printf("%s %s", stu[max].num, stu[max].name);
    for (int i = 0; i < 3; i++) {
        printf(" %d", stu[max].score[i]);
    }
    return 0;
}