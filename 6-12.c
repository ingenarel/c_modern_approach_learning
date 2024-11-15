#include <stdio.h>

int main(void){
    int num, i;

    printf("Enter number to check for prime => "); scanf("%d", &num);

    for (i = 2; (i*i <= num) && (num % i != 0) ; i++){}

    if (i*i <= num){
        printf("non prime\n");
    }else{
        printf("prime\n");
    }

    return 0;
}
