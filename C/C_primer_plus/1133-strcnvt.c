#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char * s_gets(char * st, int n);

int main(void) {
    char number[LIM];
    char * end;
    long value;
// Fuction strtol() is string to long
    puts("Enter a number (empty line to quit):");
    while (s_gets(number, LIM) && number[0] != '\n') {
        value = strtol(number, &end, 10); // 
        printf("base 10 input, base 10 output: %ld stopped at %s (%d)\n", value, end, *end);
        value = strtol(number, &end, 16); // hex
        printf("base 16 input, base 16 output: %ld stopped at %s (%d)\n", value, end, *end);
        puts("Next number:");
    }
    puts("Bye!\n");

    return 0;
}

char * s_gets(char * st, int n) {
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

// Fuction strtoul() is string to unsigned long
// Fuction strtod()  is string to double

// 其中 strtol() & strtoul 还可以指定进制
