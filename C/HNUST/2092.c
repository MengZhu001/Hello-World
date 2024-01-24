#include <stdio.h>
struct students {
    char ID[6];
    char name[10];
    int score[4];
    int total;
};

int main(void) {
    struct students student[10];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s", student[i].ID, student[i].name);
        student[i].total = 0;
        for(int k = 0; k < 3; k++) {
            scanf("%d", &student[i].score[k]);
            student[i].total += student[i].score[k];
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (student[i].total > student[max].total)
            max = i;
    }
    printf("%s %s %d", student[max].name, student[max].ID, student[max].total);
    return 0;
}