#include <stdio.h>
#define INIT 5
int main(void) {
    int i = 1;
    int friends = INIT;
    printf("%d\n", friends);
    while (friends <= 150) {
        friends = (friends - i) * 2;
        printf("%d\n", friends);
        i++;
    }
    return 0;
}