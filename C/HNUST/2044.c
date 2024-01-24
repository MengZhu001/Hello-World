#include <stdio.h>
void MatrixRead(int pnums[11][11], int n);
int IsTriMatrix(int pnums[11][11], int n);
int main(void) {
    int T, nums[11][11], n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &n);
        MatrixRead(nums, n);
        if (IsTriMatrix(nums, n)) printf("YES\n");
        else printf("NO\n");
        
    }
}

void MatrixRead(int pnums[11][11], int n) {
    for (int i = 0; i < n; i++) {
        for(int k = 0; k < n; k++) {
            scanf("%d", &pnums[i][k]);
        }
    }
}

int IsTriMatrix(int pnums[11][11], int n) {
    int k, i;
    for (i = 1; i < n; i++) {
        for (k = 0; k < i; k++) {
            if (*(*(pnums + i) + k)) break; 
        }
        if (k < i) return 0;
    }
    return 1;
}