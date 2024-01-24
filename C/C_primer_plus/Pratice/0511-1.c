 #include <stdio.h>
 #define H_TO_M 60
int main(void) {
    int mins;
    while (scanf("%d", &mins) != EOF && mins > 0) {
        printf("%d:%d\n", mins / H_TO_M, mins % H_TO_M);
    }
    return 0;
}