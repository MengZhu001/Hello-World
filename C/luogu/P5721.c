// P5721 【深基4.例6】数字直角三角形
#include <stdio.h>

int main(void){
    int n, m = 0; // m 用于数字变化
    scanf("%d", &n); // 数据输入 1 ≤ n ≤ 13 
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            m++;
            printf("%02d", m);
        }
        putchar('\n');
    }
    return 0;
}

/*
13
01020304050607080910111213
141516171819202122232425
2627282930313233343536
37383940414243444546
474849505152535455
5657585960616263
64656667686970
717273747576
7778798081
82838485
868788
8990
91
*/