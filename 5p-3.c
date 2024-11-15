#include <stdio.h>

#define P / 100.0f * shareValue

int main(void){
    float shareValue, originalCommission, rivalCommssion, pricePerShare;
    int shares; 

    printf("Enter shares => ");
    scanf("%d", &shares);    

    printf("Input price per share => ");
    scanf("%f", &pricePerShare);

    shareValue = shares * pricePerShare;

    if(shareValue < 2500){
        originalCommission = 30 + 1.7f P;
    }else if(shareValue < 6250){
        originalCommission = 56 + 0.66f P;
    }else if(shareValue < 20000){
        originalCommission = 76 + 0.34f P;
    }else if(shareValue < 50000){
        originalCommission = 100 + 0.22f P;
    }else if(shareValue < 500000){
        originalCommission = 155 + 0.11f P;
    }else{
        originalCommission = 255 + 0.09f P;
    }

    // don't know if that e/ sign was %. but i don't know what i should do for that sign, so i did a percent
    // either way, i think it was a test for conditional statements, and how well i can change a c program without too much hasssle, and i think i did it well... ig..
    if (shares < 2000){
        rivalCommssion = 33 + shareValue / 100.0f * 3;
    }else{
        rivalCommssion = 33 + shareValue / 100.0f * 2;
    }

    if(originalCommission < 39){
        originalCommission = 39;
    }

    printf("ORIGINAL BROKER COMMSSSION RATE: %.2f\n", originalCommission);
    printf("RIVAL BROKER COMMSSSION RATE: %.2f\n", rivalCommssion);

    return 0;
}
