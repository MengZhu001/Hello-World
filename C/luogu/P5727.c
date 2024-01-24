#include <stdio.h>

int main(void) {
	int n, a[200], i = 0;
    scanf("%d", &n);
    if (n) {
        
        for(; n != 1; i++){
            a[i] = n;		
            if (n % 2 == 1)
                n = 3 * n + 1;
            else n = n / 2;
        }
        a[i] = 1;
        for (int k = i;k >= 0; k--) printf("%d ", a[k]);
    } else printf("0");

	return 0;
}