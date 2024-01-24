#include <stdio.h>
#include <string.h>
#define LISTSIZE 6

int main(void) {
    const char * list[LISTSIZE] = 
    {
        "astronomy", "astounding",
        "astrophysics", "ostracize",
        "asterism", "astrophobia"
    };
    int count = 0;
    int i;
    for (i = 0; i < LISTSIZE; i++){
        printf("the function strncmp() return : %d\n", strncmp(list[i], "astro", 5));
        if (strncmp(list[i], "astro", 5) == 0) {
            printf("Fontd: %s\n", list[i]);
            count++;
        }
    }
        printf("The list contained %d words beginning"
        " with astro.\n", count);

        strstr

        return 0;
}