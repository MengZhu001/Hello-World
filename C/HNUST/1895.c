#include <stdio.h>
int main(){
    int t, HH, MM, SS;
    scanf("%d", &t);
    if(!t) printf("00:00:00");
    else
    {
        HH = t / 3600;
        MM = t % 3600;
        SS = MM % 60;
        MM = MM / 60;
        
        printf("%02d:%02d:%02d", HH, MM, SS);
    }

    return 0;
}