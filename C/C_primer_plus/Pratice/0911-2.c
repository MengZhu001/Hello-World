#include <stdio.h>
void chline(int j, int i, char ch);
int main(void) {
    int j, i;
    char ch;
    scanf("%d %d %c", &j, &i, &ch);
    chline( j, i, ch);
    return 0;
}

void chline(int j, int i, char ch) {
    for (;j > 0; j--) {
        for (int k = 0; k < i; k++) {
            printf("%c", ch);
        }
        putchar('\n');
    }
}