#include <stdio.h>

unsigned int digitCount(long long digit){
    int i;
    for (i = 0; digit > 0; i++)
        digit /= 10;
    return i;
}

int main(void){
    printf("%u", digitCount(123334321));

    return 0;
}
