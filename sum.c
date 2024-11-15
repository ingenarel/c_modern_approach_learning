#include <stdio.h>

int main(void){
    int num, sum = 0;

    printf("enter intergers to sum\nEnter 0 to terminate => ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("Sum: %d", sum);

    return 0;
}
