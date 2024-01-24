/*
此例表明，使用错误的转换说明会得到意想不到的结果
*/

#include <stdio.h>
int main()
{
    int intger = 11;
    float dot = 3.14;
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("int = %d and not %f\n", intger, intger);
    printf("dot = %f and not %d\n", dot, dot);
    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    return 0;
}

/*
int = 11 and not 0.000000
dot = 3.140000 and not 73896
un = 3000000000 and not -1294967296
end = 200 and 200
big = 65537 and not 1
verybig = 12345678908642 and not 12345678908642
*/