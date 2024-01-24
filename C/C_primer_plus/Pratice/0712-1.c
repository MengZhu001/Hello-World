#include <stdio.h>
int main(void) {
    char ch;
    int ss_ct, hh_ct, oth_ct;
    ss_ct = hh_ct = oth_ct = 0;
    
    printf("Enter some text # to quit:\n");
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case ' ': ss_ct++;
                      break;
            case '\n': hh_ct++;
                       break;
            default: oth_ct++;
        }
    }
    printf("number: %4d %4d %4d\n", ss_ct, hh_ct, oth_ct);
    return 0;
}