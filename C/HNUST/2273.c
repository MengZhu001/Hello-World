#include <stdio.h>
int main()
{
    int a,*p;
    /******* begin ********/
    scanf("%d", &a);
    p = &a;
    /*******  end  ********/
    printf("%d\n",*p*2);
    return 0;
}
