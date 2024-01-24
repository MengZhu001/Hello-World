#include<stdio.h>
void swap(int *px,int *py);//实现交换的函数声明
int main(void)
{
    int i,n,x,y,a[105];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);

    //调用函数实现将下标为x和下标为y的两个数交换
    //传递a[x]的地址值给形参指针变量px
    //传递a[y]的地址值给形参指针变量py
    swap(&a[x],&a[y]);

    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d\n",a[n-1]);
}
/********* begin ***********/
void swap(int *px, int *py) {
    *px ^= *py ^= *px ^= *py;
}


/********** end ************/
