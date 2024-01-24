#include <stdio.h>
int main(void) {
    int n, nums[11][11] = {{1},{1,1}};
    int i, k, j;
    scanf("%d", &n);
    for (i = 2; i < n; i++) {
        for(k = 0; k <= i; k++) {
            nums[i][k] = nums[i - 1][k] + nums[i - 1][k - 1];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            putchar(' ');
        }

        for (k = 0; k <= i; k++) {
            printf("%4d", nums[i][k]);
        }
        putchar('\n');
    }
    return 0;
}




/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
/*

        1
       1   1
      1   2   1
     1   3   3   1
    1   4   6   4   1
   1   5  10  10   5   1
*/
