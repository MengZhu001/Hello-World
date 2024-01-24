#include <stdio.h>
#include <string.h>
char * mergeAlternately(char * word1, char * word2);
int main(void) {
    char word1[100], word2[100];
    scanf("%s %s", word1, word2);
    
    printf("%s", mergeAlternately(word1, word2));

    return 0;
}

char * mergeAlternately(char * word1, char * word2){
    char rut_arr[200];

    int len_w1 = strlen(word1), len_w2 = strlen(word2);

    if ((len_w1 > len_w2) || (len_w1 == len_w2)) {
        for (int i = 2 * len_w2; i < len_w2 + len_w1; i++) {
            rut_arr[i] = word1[i];
        }
        
        int w1 = 0, w2 = 0;
        for (int j = 0; j < len_w2 * 2; j++) {
            if (j % 2 == 0) {
                rut_arr[j] = word1[w1];
                w1++;
            }
            if (j % 2 == 1) {
                rut_arr[j] = word2[w2];
                w2++;
            }
        }
    }
    else {
        for (int i = 2 * len_w1; i < len_w1 + len_w2; i++) {
            rut_arr[i] = word2[i];
        }

        int w1 = 0, w2 = 0;
        for (int j = 0; j < len_w2 * 2; j++) {
            if (j % 2 == 0) {
                rut_arr[j] = word1[w1];
                w1++;
            }
            if (j % 2 == 1) {
                rut_arr[j] = word2[w2];
                w2++;
            }
        }
    }
    rut_arr[2 * strlen(rut_arr) + 1] = '\0';

    return rut_arr;
}
