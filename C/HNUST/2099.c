#include <stdio.h>
#include <string.h>
#define N 101
int main(void) {
    char strs[N][81];
    int n;
    for (int i = 0; i < n; i++) {
        scanf("%s", strs[i]);
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (strlen(strs[max]) < strlen(strs[i]))
            max = i;
    }
    printf("The longest is: %s", strs[max]);
    return 0;
}