#include <stdio.h>

int main(void) {
    char ch;
    int count = 0;
    ch = getchar();

    while (ch != '\n') {
        if (ch != ' ') {
            ch = getchar();
            if (ch == ' ' || ch == '\n')
                count++;
            continue;
        }
        else if (ch == ' ') 
        ch = getchar();
    }
    printf("%d", count);
    return 0;
}

// https://blog.csdn.net/m0_46299442/article/details/115795112

    // while (scanf("%c", &ch)) {
    //     if (ch == ' ') {
    //             count++;
    //     }
    //     else if (ch == '\n'){
    //         count++;
    //         break;
    //     } 
    //     else continue;
    // }
    // printf("%d", count);
    // return 0;


