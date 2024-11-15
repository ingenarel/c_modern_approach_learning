#include <stdio.h>

float exponent(float num, int expo){
    float result = 1;
    for (int i = 0; i < expo ; i++) {
        result = result * num;
    }
    return result;
}

int main(void) {
    float x;
    printf("x => ");
    scanf("%f", &x);
    printf(
        "%.3f\n",
        ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6
    );
}
