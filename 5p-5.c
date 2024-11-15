#include <stdio.h>

int main(void){
    float income, tax;

    printf("Enter income => ");
    scanf("%f", &income);

    if (income < 750){
        tax = income / 100;
    }else if (income < 2250){
        tax = 7.5 + (income - 750) * .02f;
    }else if (income < 3750){
        tax = 37.5 + (income - 2250) * .03f;
    }else if (income < 5250){
        tax = 82.5 + (income - 3750) * .04f;
    }else if (income < 7000){
        tax = 142.5 + (income - 5250) * .05f;
    }else{
        tax = 230 + (income - 7000) * .06f;
    }

    printf("Tax: %.2f\n", tax);

    return 0;
}
