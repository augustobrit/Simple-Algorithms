#include <stdio.h>

const float PI = 3.14159265359;

float ToRadians(float angle) {
    float a;
    a = angle * PI / 180.0;
    return a;
}

float ToDegrees(float angle) {
    float a;
    a = angle * 180.0 / PI;
    return a;
}

int main(void) {
    float radToDegree = ToDegrees(1.0);
    printf("Rad to Degree: %f", radToDegree);
    
    float degreeToRadians = ToRadians(360.0);
    printf("Degree to Rad: %f", degreeToRadians);
    
    return 0;
}

