#include <stdio.h>

void countdown(int x){
    printf("T minus %d and counting...\n", x);
}

int main(void){
    for(signed char i = 10; i > 0; i--)
        countdown(i);

    return 0;
}
