// m 12; n 28; m % n = 12
// m 28; n 12; m % n = 4;
// m 12; n 4; m % n = 0;
// m 4; n 0;

#include <stdio.h>

int main(void){
    int num1, num2, temp_i;

    printf("Enter two ints => ");
    scanf("%d %d", &num1, &num2);

    while(num2 != 0){
        temp_i = num1 % num2;
        num1 = num2;
        num2 = temp_i;
    }

    printf("GCD: %d", num1);

    return 0;
}
