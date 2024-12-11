// m 12; n 28; m % n = 12
// m 28; n 12; m % n = 4;
// m 12; n 4; m % n = 0;
// m 4; n 0;

#include <stdio.h>

int gcd(int x, int y){
    return (y == 0) ? x : gcd(y, x % y);
}

int main(void){
    int num1, num2;
    printf("Enter two ints => "); scanf("%d %d", &num1, &num2);

    printf("GCD: %d\n", gcd(num1, num2));

    return 0;
}
