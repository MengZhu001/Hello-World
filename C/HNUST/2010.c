#include <stdio.h>
void Star(int n) {
    for (int i = 0; i < n; i++) {
        putchar('*');
    }
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("printf\(\"");
    Star(n);
    printf("\\n\"\);");
    return 0;
}
