#include <stdio.h>

int main(void){
    int i, j, k;

    i = 1;
    printf("a\n");
    printf("%d\n", i++ - 1);
    printf("%d\n", i);

    i = 10;
    j = 5;
    printf("b\n");
    printf("%d\n", i++ - ++j);
    printf("%d\t%d\n", i, j);

    i = 7;
    j = 8;
    printf("c\n");
    printf("%d\n", i++ - --j);
    printf("%d\t%d\n", i, j);

    i = 3;
    j = 4;
    k = 5;
    printf("d\n");
    printf("%d\n", i++ - j++ + --k);
    printf("%d\t%d\t%d\n", i, j, k);

    return 0;
}
