#include <stdio.h>

#define DEVISOR 166

int main(void){
    float height , length , width;
    printf("height => "); scanf("%f", &height);
    printf("length => "); scanf("%f", &length);
    printf("width => "); scanf("%f", &width);

    float volume, weight;
    volume = height * length * width;
    weight = volume / DEVISOR;

    int weight_without_decimal = weight;

    if ((weight - weight_without_decimal) < 0.5f) {
        weight = weight_without_decimal;
    } else {
        weight_without_decimal++;
        weight = weight_without_decimal;
    }

    printf("Dimensions: %.0fx%.0fx%.0f\n", length, width, height);
    printf("Volume (cubic inches): %.0f\n", volume);
    printf("Dimensional weight (pounds): %.0f\n", weight);
}
