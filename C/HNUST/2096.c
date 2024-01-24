#include <stdio.h>
#include <string.h>

int main(void) {
    char strs[5][81], *p[5];
    for (int i = 0; i < 5; i++) {
        scanf("%s", strs[i]);
        p[i] = strs[i];
    }

    int max;
    char *temp;
    for (int i = 0, k; i < 5; i++) {
        max = i;
        for (k = i ; k < 5; k++) {
            if (strcmp(p[max], p[k]) > 0) 
                max = k;
        }
        temp = p[max];
        p[max] = p[i];
        p[i] = temp;
        
    }
    puts("After sorted:");
    for (int i = 0; i < 5; i++)
        puts(p[i]);
    return 0;
}