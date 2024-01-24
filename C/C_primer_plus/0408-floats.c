#include <stdio.h>

int main(void)
{
    const double REMT = 3852.99;

    printf("*%f*\n",REMT);
    printf("*%e*\n",REMT);
    printf("*%4.2f*\n",REMT);
    printf("*%3.1f*\n",REMT);
    printf("*10.3%f*\n",REMT);
    printf("*%10.3E*\n",REMT);
    printf("*%+4.2f*\n",REMT);
    printf("*%010.2f*\n",REMT);

    return 0;
}

/*
*3852.990000*
*3.852990e+03*
*3852.99*
*3853.0*
*10.33852.990000*
* 3.853E+03*
*+3852.99*
*0003852.99*
*/