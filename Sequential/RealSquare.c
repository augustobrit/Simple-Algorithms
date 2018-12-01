#include <stdio.h>

int main(void) {
    float n;

    printf("Type a real number: ");
    scanf("%f", &n);

    float sqr = n * n;

    printf("Square of %f is %f", n, sqr);

    return 0;
}