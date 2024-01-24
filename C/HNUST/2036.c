#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */

int fib(int n){
    if (n <= 1) return n;
    else {
        int a = 0, b = 1, temp;
        for (int i = 1; i < n; ++i) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}


void PrintFN(int m, int n) {
    int s, flag = 0;

    for (int i = 1;1; i++) {
        s = fib(i);
        if (s < m) continue;
        if (s <= n) {
            if (flag == 0) flag = 1;
            else putchar(' ');        
            printf("%d", s);
        } else break;

        }
    
    if (!flag) printf("No Fibonacci number");
    else putchar('\n');
}



// void swap(int *a, int *b) {
//     int c;
//     c = *a;
//     *a = *b;
//     *b = c;
// }


// int fib(int n) {
//     int temp1 = 0, temp2 = 1, count = 0;
//     for ( ; ; ){
//         swap(&temp1, &temp2);
//         temp2 = temp1 + temp2;
//         count++;
//         if (count == n) return temp1 + temp2;
//     }
//     return 0;
// }

// // an = an-1 + an-2
// void PrintFN(int m, int n) {
//     int s, flag = 0;
//     for (int i = 1;1; i++) {
//         s = fib(i);
//         if (s >= m) {
//             if (m == 1) printf("1");
//             printf("%d", s);
//             flag = 1;
            
//         }
//         if (s >= m && s <= n) putchar(' ');
//         if (s >= n) {
//             putchar('\n');
//             break;
//         }
//     }
//     if (!flag) {
//         printf("No Fibonacci number");
//     }
// }