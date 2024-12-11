#include <stdio.h>

int main(void){
    int a = 5;
    int b;
    int c = (b = a + 2) - (a = 1) ;
    printf("%d\n", c);

    return 0;
}
