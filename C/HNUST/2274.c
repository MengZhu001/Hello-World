#include <stdio.h>
int main()
{
    int a,*p1,*p2;
    p1=&a;
    scanf("%d",p1); //scanf("%d",&a);
    /******* begin ********/
    p2 = p1;

    /*******  end  ********/
    printf("%d\n",*p2*2);
    return 0;
}
