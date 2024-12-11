#include <stdio.h>

int main(void) {
    float fahr, cel;

    printf("fahr=> ");
    scanf("%f", &fahr);

    cel = (fahr-32)*(5.0f/9.0f);
    printf("Cel = %.1f\n", cel);
}
