#include <stdio.h>
void Temperatures(const double Fahrenheit) {
    double Celsius, Kelvin_Scale;
    printf("%.3lf ", Fahrenheit);
    Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0);
    Kelvin_Scale = Celsius + 273.16;
    printf("%.3lf %.3lf\n", Celsius, Kelvin_Scale);
}
int main(void) {
    double Fahrenheit;
    printf("Enter a Fahrenheit:");
    while (scanf("%lf", &Fahrenheit) == 1) {
        Temperatures(Fahrenheit);
    }

    return 0;
}