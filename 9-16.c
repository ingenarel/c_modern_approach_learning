#include <stdio.h>

int fact(int x){
    return x <= 1 ? 1 : x * fact(x - 1);
}

int main(void){
    printf("%d", fact(3));

    return 0;
}
