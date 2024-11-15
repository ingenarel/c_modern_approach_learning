#include <stdio.h>

int main(void){
    int first, second, third;

    printf("enter two digit number => ");
    scanf("%1d%1d%1d", &first, &second, &third);

    printf("reverse: %d%d%d\n", third, second, first);

    return 0;
}
