#include <stdio.h>

int main(void){
    int input, first, second, third;
    printf("enter two digit number => ");
    scanf("%d", &input);
    // 123
    first = input / 100;
    second = input % 100 / 10;
    third = input % 100 % 10;

    printf("reverse: %d%d%d\n", third, second, first);

    return 0;
}
