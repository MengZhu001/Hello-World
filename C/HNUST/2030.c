#include <stdio.h>
//void arr_inset(int arr[], int num);
int main(void) 
{
    int numa[41];
    int na, nb, n = 0, i, k, j;
    int ret_num[41];

    scanf("%d", &na);
    for (i = 0; i < na; i++)
        scanf("%d", &numa[i]);
    scanf("%d", &nb);
    for (i = na; i < na + nb; i++)
        scanf("%d", &numa[i]);


    for (i = 0; i < na; i++) {
        for (k = na; k < na + nb; k++)
            if (numa[i] == numa[k]) break;

        if (k == na + nb) {
            for (j = 0; j < n; j++)
                if (ret_num[j] == numa[i]) break;
            if (j == n) {
                ret_num[n] = numa[i];
                n++;
            }
        }
    }

    for (i = na; i < na + nb; i++) {
        for (k = 0; k < na; k++) 
            if (numa[i] == numa[k]) break;

        if (k == na) {
            for (j = 0; j < n; j++)
                if (ret_num[j] == numa[i]) break;
            if (j == n) {
                ret_num[n] = numa[i];
                n++;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", ret_num[i]);
        if (i < n - 1) putchar(' ');
    }
    return 0;
}

// #include <stdio.h>
// int main(void) {
//     int na, nb, a[21], b[21];
//     int ret_num[42];

//     scanf("%d", &na);
//     for (int i = 0; i < na; i++)
//         scanf("%d", &a[i]);

//     scanf("%d", &nb);
//     for (int i = 0; i < nb; i++)
//         scanf("%d", &b[i]);

//     for (int k = 0; k < na; k++) {
//         for (int j = 0; j < nb; j++) {
            
//         }
//     }