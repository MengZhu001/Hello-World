#include <stdio.h>
void out(int *y,int *m,int *d);

int main()
{
    int mm,dd,yyyy;
    scanf("%d-%d-%d",&mm,&dd,&yyyy);
    out(&yyyy,&mm,&dd);
    return 0;
}

/*********** out()�������� begin ***********/
void out(int *y, int *m, int *d) {
    printf("%04d-%02d-%02d", *y, *m, *d);
}

/*********** out()�������� end ***********/
