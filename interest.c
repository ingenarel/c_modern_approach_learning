#include <stdio.h>

#define ARR_LEN(n) (int) (sizeof(n) / sizeof(n[0]))

int main(void){
    float oldRates[5];
    int years, initialInterest;

    printf("Enter initial interest rate (int) => "); scanf("%d", &initialInterest);
    printf("Enter number of years to show (int) => "); scanf("%d", &years);
    printf("Years");

    for (int i = 0; i < ARR_LEN(oldRates); i++){
        printf("\t%d%%", i+initialInterest);
        oldRates[i] = 100;
    }
    printf("\n");

    for (int i = 1; i <= years; i++){
        printf("%d", i);
        for (int a = 0; a < ARR_LEN(oldRates); a++){
            oldRates[a] = oldRates[a] + oldRates[a] * (a+initialInterest) / 100;
            printf("\t%.2f", oldRates[a]);
        }
        printf("\n");
    }

    return 0;
}
