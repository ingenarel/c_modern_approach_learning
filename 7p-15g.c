#include <stdio.h>

int main(void){
    int num;
    long double factorial = 1;

    printf("Enter a positive int => ");
    scanf("%d", &num);

    // for (int a = 1; a <= 5000; a++){
        // num = a;
        // factorial = 1;
        for (int i = 1; i <= num; i++)
            factorial *= i;
        printf("Factorial of %d: %Le\n", num, factorial);
    // }
    // largest value of num = 1754

    return 0;
}
