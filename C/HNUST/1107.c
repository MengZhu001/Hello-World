#include <stdio.h>
int main(void) {
    
    double source, max;
    scanf("%lf", &max);
    while (scanf("%lf", &source) && (source > 0)) {
        if (source > max) max = source;
    }
    printf("%lf", max);
    
    return 0;
}