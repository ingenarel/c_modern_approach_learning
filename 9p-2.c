#include <stdio.h>

float computeTax(float income){
    return 
        (income < 750) ?
            income / 100
        :(income < 2250) ?
            7.5 + (income - 750) * .02f
        :(income < 3750) ?
            37.5 + (income - 2250) * .03f
        :(income < 5250) ?
            82.5 + (income - 3750) * .04f
        :(income < 7000) ?
            142.5 + (income - 5250) * .05f
        :
            230 + (income - 7000) * .06f
    ;
}

    int main(void){
        float income;

        printf("Enter income => ");
        scanf("%f", &income);

        printf("Tax: %.2f\n", computeTax(income));

        return 0;
    }
