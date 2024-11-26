#include <stdio.h>

int fact(int x){
    int sum = 1;
    for (int i = x; i > 0; i--)
        sum *= i;
    return sum;
}

int main(void){
    printf("%d", fact(10));

    return 0;
}
