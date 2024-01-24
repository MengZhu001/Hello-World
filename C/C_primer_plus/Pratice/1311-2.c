#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define LEN 40
int main(int argc, char *argv[]) {
    FILE *in, *out;
    char name[LEN];

    if (argc < 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((in = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Can't open file \" %s \" ", argv[1]);
        exit(EXIT_FAILURE);
    }

    strncat(name, argv[1], LEN - 5);
    name[LEN - 5] = '\0';
    strcat(name, ".copy");
    if ((out = fopen(name, "wb")) == NULL) {
        fprintf(stderr, "Can't create file error\n");
        exit(3);
    }

    fwrite(out, 256, 10, in);

    if ((fclose(in) != 0) || (fclose(out) != 0)) {
        fprintf(stderr , "oops! Closing file error\n");
        exit(EXIT_FAILURE);
    }
}