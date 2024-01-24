#include <stdio.h>
#define MAXN 10

void sort( int a[], int n );

int main()
{
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

void sort( int a[], int n ) {
    int min, temp;
    for (int i = 0 , k; i < n; i++) {
        min = i;
        for (k = i; k < n; k++) {
            if (a[k] < a[min]) min = k;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
