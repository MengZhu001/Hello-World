# include <stdio.h>
void swap ( int *pa, int *pb );

int main( )
{
    int a, b;

    scanf ( "%d%d", &a, &b);
    swap ( &a, &b );
    printf("%d %d\n", a, b);
}

//温馨提示：请仅将swap()函数的定义代码粘贴在此
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
