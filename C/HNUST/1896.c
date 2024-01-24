#include <stdio.h>
int main(){
    int HH1, MM1, SS1, T1;
    int HH2, MM2, SS2, T2;
    int HH3, MM3, SS3, T3;

    scanf("%d:%d:%d", &HH1, &MM1, &SS1);
    scanf("%d:%d:%d", &HH2, &MM2, &SS2);

    T1 = HH1 * 3600 + MM1 * 60 + SS1;
    T2 = HH2 * 3600 + MM2 * 60 + SS2;

    T3 = T2 - T1;

    HH3 = T3 / 3600;
    MM3 = T3 % 3600;
    SS3 = MM3 % 60;
    MM3 = MM3 / 60;
    
    printf("%02d:%02d:%02d", HH3, MM3, SS3);
    return 0;
}