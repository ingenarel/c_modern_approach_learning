// m 12; n 28; m % n = 12
// m 28; n 12; m % n = 4;
// m 12; n 4; m % n = 0;
// m 4; n 0;

#include <stdio.h>

int main(void){
    int num1, num2;
    int temp_i, temp_gcd, temp_b;

    printf("Enter a fraction => ");
    scanf("%d/%d", &num1, &num2);

    temp_gcd = num1; temp_b = num2;

    while(temp_b != 0){
        temp_i = temp_gcd % temp_b;
        temp_gcd = temp_b;
        temp_b = temp_i;
    }

    num1 /= temp_gcd; num2 /= temp_gcd;

    printf("lowest: %d/%d", num1, num2);

    return 0;
}
