#include <stdio.h>

int main(void){
    long num, sum = 0;

    printf("enter intergers to sum\nEnter 0 to terminate => ");

    do{
        scanf("%ld", &num);
        sum += num;
    }while (num != 0);

    printf("Sum: %ld", sum);

    return 0;
}
