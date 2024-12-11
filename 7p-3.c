#include <stdio.h>

int main(void){
    double num, sum = 0;

    printf("enter doubles to sum\nEnter 0 to terminate => ");

    do{
        scanf("%lf", &num);
        sum += num;
    }while (num != 0);

    printf("Sum: %lf", sum);

    return 0;
}
