#include<stdio.h>
void swap(int *px,int *py);//ʵ�ֽ����ĺ�������
int main(void)
{
    int i,n,x,y,a[105];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);

    //���ú���ʵ�ֽ��±�Ϊx���±�Ϊy������������
    //����a[x]�ĵ�ֵַ���β�ָ�����px
    //����a[y]�ĵ�ֵַ���β�ָ�����py
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
