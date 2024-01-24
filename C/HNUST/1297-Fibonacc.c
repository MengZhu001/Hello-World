#include <stdio.h>

void swap(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}


int main(void) {
    int n, temp1 = 1, temp2 = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("%d", temp1 + temp2);
        swap(&temp1, &temp2);
        temp2 = temp1 + temp2;
        if (i == n) putchar('\n');
        else putchar(' ');
    }
    return 0;
}

// an = an-1 + an-2