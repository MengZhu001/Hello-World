# include <stdio.h>
void swap ( int *pa, int *pb );

int main( )
{
    int a, b;

    scanf ( "%d%d", &a, &b);
    swap ( &a, &b );
    printf("%d %d\n", a, b);
}

//��ܰ��ʾ�������swap()�����Ķ������ճ���ڴ�
/*********** swap() definition begin ***********/

void swap(int *pa, int *pb) {
    /*
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    */
    *pa ^= *pb ^= *pa ^= *pb;
}


/*********** swap() definition end ************/
