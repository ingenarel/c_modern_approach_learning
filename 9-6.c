#include <stdio.h>

unsigned char digit(int num, unsigned char inputDigit){
    unsigned char digit;
    for (int i = 0; i < inputDigit; i++, num /= 10)
        digit = num % 10;
    return digit;
}

int main(void){
    for (int i = 1; i < 14; i++)
        printf("digit = %hhu\n", digit(710982382, i));

    return 0;
}
