#include <stdio.h>

int main(void) {
    float c, f, k;

    printf("Type Temperature in Celsius: ");
    scanf("%f", &c);

    f = c * (9.0/5.5) + 32.0;
    k = c + 273.15;

    printf("Kelvin: %f Fahrenheit: %f", k, f);
}