#include <stdio.h>

int main(void){
    int inputNum;

    printf("enter an int => ");
    scanf("%d", &inputNum);

    do{
        printf("%d", inputNum%10);
        inputNum /= 10;
    }while(inputNum > 0);

    return 0;
}
