#include <stdio.h>

int main(void){
    int i, j, k;

    i = 2;
    j = 3;
    k = i * j == 6;
    printf("a\n");
    printf("%d\n", k);

    i = 5;
    j = 10;
    k = 1;
    printf("b\n");
    printf("%d\n", k > i < j);

    i = 3;
    j = 2; 
    k = 1;
    printf("c\n");
    printf("%d\n", i < j == j < k);

    i = 3;
    j = 4;
    k = 5;
    printf("d\n");
    printf("%d\n", i % j + i < k);

    return 0;
}
