#include <stdio.h>
int main(void) {
    int n, num[101];
    int count[11] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++) {
        count[num[i]]++;
    }
    int flag = 0;
    for (int i = 0; i < 10; i++) {
        count[10] += count[i] / 2;
        if (count[i] % 2){
            flag = 1;
        }
    }
    count[10] *= 2;
    if (flag) count[10] += 1;
    printf("%d\n", count[10]);
    return 0;
}