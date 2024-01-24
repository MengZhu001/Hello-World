
# include <stdio.h>
void input(int *pa, int n);
void output(int *pa, int n);

int main(void)
{
    int n,i;
    int a[105];
    scanf("%d",&n);
    input(a,n);
    output(a,n);
}
void input(int *pa, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",pa+i);
    }
}
//温馨提示：请仅将output()函数的定义代码粘贴在此
/*********** output() definition begin ***********/
void output(int *pa, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(pa + i));
    }
}

/*********** output() definition end ************/
