#include <stdio.h>
#include <string.h>

#define NLEN 30
struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

void GetInfo(struct namect *);
void MakeInfo(struct namect *);
void ShowInfo(const struct namect *);
char * s_gets(char *st, int n);

int main(void) {
    struct namect person;

    GetInfo(&person);
    MakeInfo(&person);
    ShowInfo(&person);
    return 0;
}
void GetInfo(struct namect *pst) {
    printf("Please enter your fist name.\n");
    s_gets(pst->fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst->lname, NLEN);
}

void MakeInfo(struct namect *pst) {
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void ShowInfo(const struct namect *pst) {
    printf("%s %s, your name contains %d letters.\n",
    pst->fname, pst->lname, pst->letters);
}

char * s_gets(char *st, int n) {
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}