#include <stdio.h>

#define P / 100.0f * shareValue

int main(void){
    float shareValue, originalCommission;

    for (;;){
        printf("Enter value of shares => ");
        scanf("%f", &shareValue);

        if (shareValue == 0)
            return 0;

        if(shareValue < 2500)
            originalCommission = 30 + 1.7f P;
        else if(shareValue < 6250)
            originalCommission = 56 + 0.66f P;
        else if(shareValue < 20000)
            originalCommission = 76 + 0.34f P;
        else if(shareValue < 50000)
            originalCommission = 100 + 0.22f P;
        else if(shareValue < 500000)
            originalCommission = 155 + 0.11f P;
        else
            originalCommission = 255 + 0.09f P;

        printf("ORIGINAL BROKER COMMSSSION RATE: %.2f\n\n", originalCommission);
    }

    return 0;
}
