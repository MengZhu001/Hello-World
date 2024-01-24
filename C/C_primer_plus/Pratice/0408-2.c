#include <stdio.h>
#include <string.h>
int main(){
    int len;
    char name[100];
    printf("please enter your name:\n");
    scanf("%s", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    len = strlen(name) + 3;
    printf("\"%*s\"\n", len, name);
    return 0;
}