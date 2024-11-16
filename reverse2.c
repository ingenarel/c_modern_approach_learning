#include <stdio.h>

int main(void){
    int lenOfnumbers;

    printf("Enter the ammount of numbers that you want to reverse => "); scanf("%d", &lenOfnumbers);

    int numbers[lenOfnumbers];

    printf("Enter %d numbers => ", lenOfnumbers);

    for (int i = 0; i < lenOfnumbers; i++)
        scanf("%d", &numbers[i]);
    
    printf("In reversed order:");
    for (int i = lenOfnumbers - 1; i >= 0; i--){
        printf(" %d", numbers[i]);
    }

    return 0;
}
