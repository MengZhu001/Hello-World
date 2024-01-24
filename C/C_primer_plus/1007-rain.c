#include <stdio.h>
#define MONTHS 12
#define YEAR 5

int main(void) {
    const float rain[YEAR][MONTHS] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.0, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {},
        {},
        {},
        {}
    };
    int year, months;
    float subtot, total;

    printf("  YEAR  RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEAR; year++) {
        for (months = 0, subtot = 0; months < MONTHS; months++) {
            subtot += rain[year][months];
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEAR);
    printf("MONTHLY  AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");

    for (months = 0; months < MONTHS; months++) {
        for (year = 0, subtot = 0; year < YEAR; year++) {
            subtot += rain[year][months];
        }
        printf("%4.1f", subtot / YEAR);
    }
    printf("\n");

    return 0;
}