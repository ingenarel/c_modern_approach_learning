#include <stdio.h>

#define ARR_LEN(n) (int) (sizeof(n) / sizeof(n[0]))

int main(void){
    int fib_numbers[20] = {0, 1};

    for (int i = 2; i < ARR_LEN(fib_numbers); i++)
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];

    for (int i = 0; i < ARR_LEN(fib_numbers); i++)
        printf("%d\n", fib_numbers[i]);

    return 0;
}
