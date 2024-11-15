#include <stdio.h>

int main(void){
    int i, j, k;

    i = 10;
    j = 5;
    printf("a\n");
    printf("%d\n", !i < j);

    i = 2;
    j = 1;
    printf("b\n");
    printf("%d\n", !!i + !j);

    i = 5;
    j = 0;
    k = -5;
    printf("c\n");
    printf("%d\n", i && j || k);

    i = 1;
    j = 2;
    k = 3;
    printf("d\n");
    printf("%d\n", i < j || k);

    return 0;
}
