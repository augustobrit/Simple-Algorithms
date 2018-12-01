#include <stdio.h>

int main(void) {
    float n;

    printf("Type a real number: ");
    scanf("%f", &n);

    float f = n / 5;

    printf("%f / 5 is: %f", n, f);

    return 0;
}