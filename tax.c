#include <stdio.h>

#define TAX (5.0f/100.0f)

int main(void) {
    float money;
    printf("Enter an ammount: ");
    scanf("%f", &money);
    printf("With tax added: $%.2f\n", money + money * TAX);
}
