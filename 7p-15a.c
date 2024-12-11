#include <stdio.h>

int main(void){
    int num;
    short factorial = 1;

    printf("Enter a positive int => ");
    scanf("%d", &num);

    // for (int a = 1; a <= 10; a++){
    //     num = a;
        // factorial = 1;
        for (int i = 1; i <= num; i++)
            factorial *= i;
        printf("Factorial of %d: %hd\n", num, factorial);
    // }
    // largest value of num = 7

    return 0;
}
