#include <stdio.h>
int main(void) {
    int num, fff;
    scanf("%d", &num);
    if (num < 8)
        fff = 8 - num;
    else if (num < 88)
        fff = 88 - num;
    else if (num < 888)
        fff = 888 - num;
    else if (num < 8888)
        fff = 8888 - num;
    else if (num < 88888)
        fff = 88888 - num;
    switch (num) {
        case 8: 
            fff = 80;
            break;
        case 88:
            fff = 800;
            break;
        case 888:
            fff = 8000;
            break;
        case 8888:
            fff = 80000;
            break;
    }
    printf("%d", fff);
    return 0;
}