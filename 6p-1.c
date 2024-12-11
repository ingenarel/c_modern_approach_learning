#include <stdio.h>

int main(void){
    float num, max = 0;

    do{
        printf("Enter number => ");
        scanf("%f", &num);
        max = (num > max) ? num : max;
    }while(num > 0);

    printf("max: %f", max);

    return 0;
}
