#include <stdio.h>

void one_three();
void two();

int main(){

    printf("starting now:\n");
    one_three();
    printf("three\ndone!");

    return 0;
}

void one_three(){
    printf("one\n");
    two();
}

void two(){
    printf("two\n");
}