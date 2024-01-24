#include <stdio.h>
int main(void) {

    int minute, hour;
    scanf("%d:%d", &hour, &minute);
    if (hour >= 12 && hour <= 24) {
        if (hour == 12) printf("%02d:%02d pm", 12, minute);
        else printf("%02d:%02d pm", hour - 12, minute);
    } 
    else {
        if (hour == 0) printf("%02d:%02d am", 12, minute);
        else printf("%02d:%02d am", hour, minute);
    }
    return 0;
}