#include <stdio.h>

int main(void){
    int num;

    printf("Enter a number => ");
    scanf("%d", &num);

    num = num >= 0 ? num : -num;

    if(num < 10){
        printf("the num is 1 digit\n");
    }else if(num < 100){
        printf("the num is 2 digit\n");
    }else if(num < 1000){
        printf("the num is 3 digit\n");
    }else if(num < 10000){
        printf("the num is 4 digit\n");
    }

    return 0;
}
