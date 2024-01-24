#include <stdio.h>
#define SIZE 6
void MatrixRead(int pnums[][SIZE], int n);
void FindSiddlePoint(int pnums[][SIZE], int n);
int main(void) {
    int n, nums[SIZE][SIZE];
    scanf("%d", &n);
    MatrixRead(nums, n);
    FindSiddlePoint(nums, n);
    return 0;
}

void MatrixRead(int pnums[][SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            scanf("%d", *(pnums + i) + k);
        }
    }
}


void FindSiddlePoint(int pnums[][SIZE], int n) {
    // 找到这一行的最大的，再判断是不这列最小；
    int rowMax = 0, rowMax2, colMin = 0, colMin2 = 0,flag = 1;
    for (int i = 0, j; i < n; i++) {

        for (int k = 0; k < n; k++)
            if(pnums[i][rowMax] < pnums[i][k]) rowMax = k;

        for (int k2 = rowMax; k2 < n; k2++) 
            if (pnums[i][rowMax] == pnums[i][k2]) rowMax2 = k2;

        for (j = 0; j < n; j++) {
            if(pnums[colMin][rowMax] > pnums[j][rowMax]) colMin = j;
            if(pnums[colMin][rowMax2] > pnums[j][rowMax2]) colMin2 = j;
        }
        
        if (colMin == i) {
            printf("%d %d\n", colMin, rowMax);
            flag = 0;
        }
        if (colMin2 == i && rowMax2 != rowMax)
            printf("%d %d", colMin, rowMax2);

    }
    if (flag) printf("NONE\n");
}