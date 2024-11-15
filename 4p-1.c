#include <stdio.h>

int main(void){
    int input, first, second;
    printf("enter two digit number => ");
    scanf("%d", &input);
    first = input / 10;
    second = input % 10;
    printf("reverse: %d%d\n", second, first);

    return 0;
}
