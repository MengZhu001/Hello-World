#include <stdio.h>

int main() {
    for (int i = 100; i < 1000; i++) {
        if (i == (i / 100) * (i / 100) * (i / 100) + (i % 100 / 10) * (i % 100 / 10) * (i % 100 / 10) + (i % 10) * (i % 10) * (i % 10))
            printf("%d\n", i);
    }
    return 0;
}

// 153
// 370
// 371
// 407