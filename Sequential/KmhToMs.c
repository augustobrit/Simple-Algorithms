#include <stdio.h>

int main(void) {
    float kmh;

    printf("Type units in km/h: ");
    scanf("%f", &kmh);

    float ms = kmh / 3.6;

    printf("units in m/s: %f", ms);

    return 0;
}