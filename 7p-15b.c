#include <stdio.h>

int main(void){
    int num;
    int factorial = 1;

    printf("Enter a positive int => ");
    scanf("%d", &num);

    // for (int a = 1; a <= 50; a++){
        // num = a;
        // factorial = 1;
        for (int i = 1; i <= num; i++)
            factorial *= i;
        printf("Factorial of %d: %d\n", num, factorial);
    // }
    // largest value of num = 12

    return 0;
}
