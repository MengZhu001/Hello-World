// 密码检测
#include <stdio.h>
#include <string.h>

int str_cam(char* str) {
    int i = strlen(str);
    const char password[9] = "hnkd2012";
    if (i == 8) {
        for (i = 0; i < 8; i++) {
            if (str[i] != password[i])
                break;
        }
        if (i == 8) return 1;
    }
    return 0;
}
int main(void) {
    int i;
    char usr_input [50];
    printf("Input password:");
    gets(usr_input);
    for (i = 0; i <= 2; i++) {
        if (str_cam(usr_input)) {
            printf("Congratulation!");
            break;
        } else if (i < 2) {
            printf("Error,please input again:");
            gets(usr_input);
        }
    }
    if (i == 3) 
        printf("The program is terminated!");
    return 0;
}