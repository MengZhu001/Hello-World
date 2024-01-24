// 寻找一个区间内的完数

#include <stdio.h>
int main(void) {
    int flag, i, j, m, n, s;

    scanf("%d %d", &m, &n);
    flag = 0;
    for (i = m; i <= n; i++) {
        s = 0;
        for (j = 1; j < i; j++)
            if (i % j == 0)
                s = s + j;

        if (i == s) { // 按格式输出 n = a + b + c ...
            flag = 1;
            printf("%d=1", i);
            for (j = 2; j < i; j++)
                if (i % j == 0)
                    printf("+%d", j);

            printf("\n");
        }
    }

    if (flag == 0) printf("None\n");
    return 0;
}

// # include <stdio.h>

// void Print(int num) {
//     printf ("%d=1", num);
//         for (int k = 2; k < num; k++){
//             if (num % k == 0) printf ("+%d", k);
//         }
//     printf("\n");
// }

// int IsPerfectNum(int num) {
//     int s = 0;
//     for (int i = 1; i < num; i++){
//         if (num % i == 0) s += i;
//     }
//     if (s == num) return 1;
//     else return 0;
// }

// int main(void) {
//     int flag = 0, i;
//     int m, n;

//    	scanf ("%d%d", &m, &n); //

//     for (i = m; i <= n; i++) {
//     if ()
//         if (IsPerfectNum(i)) {
//             flag = 1;
//             Print(i);
//         }
//     }

//   	if (flag = 0) printf("None\n");  //

//   	return 0;
// }
