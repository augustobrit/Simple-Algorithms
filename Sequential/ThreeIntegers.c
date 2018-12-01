#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    printf("Type first number: ");
    scanf("%d", &n1);

    printf("Type second number: ");
    scanf("%d", &n2);

    printf("Type third number: ");
    scanf("%d", &n3);

    int sum = n1+n2+n3;

    printf("The sum of typed numbers is: %d", sum);

    return 0;
}