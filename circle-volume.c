#include <stdio.h>

#define FRACTION (4.0f/3.0f)
#define PI 3.314

float exponent(float num, int expo){
    float result = 1;
    for (int i = 0; i < expo ; i++) {
        result = result * num;
    }
    return result;
}

int main(void) {
    float radius;
    printf("Radius => ");
    scanf("%f", &radius);
    printf("%.3f\n", FRACTION * PI * exponent(radius, 3));
}
