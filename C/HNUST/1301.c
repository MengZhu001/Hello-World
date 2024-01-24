#include <stdio.h>

int main(void) {
    int n, a;
    long long s = 0, temp;
    scanf("%d %d", &a, &n);

    for (int i = 1; i <= n; i++) {
        temp = a;
        for (int j = 1; j < i; j++) {
            temp = temp * 10;
            temp += a;
        }
        s += temp;
    }
    printf("%lld\n", s);
    return 0;
}

















// 初代

// #include <stdio.h>

// long long PartAdd(int a, int i) {
//     long long s = a;
//     for (int j = 1; j < i; j++) {
//         s = s * 10;
//         s += a;
//     }
//     return s;
// }

// int main(void) {
//     int n, a;
//     long long s = 0;
//     scanf("%d %d", &a, &n);

//     for (int i = 1; i <= n; i++) {
//         s += PartAdd(a, i);
//     }
//     printf("%lld\n", s);
//     return 0;
// }