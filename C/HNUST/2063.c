#include <stdio.h>
int main()
{
    int i,n,a,b;
    /******** begin *********/
    int *pa = &a, *pb = &b;
    /******** end *********/
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",*pa+*pb);
    }
    return 0;
}
