#include <stdio.h>

int main(void){
    int i, j, k;

    i = 3;
    j = 4;
    k = 9;
    printf("a\n");
    printf("%d\n", i < j || ++j < k);
    printf("%d\t%d\t%d\n", i, j, k);

    i = 7;
    j = 8;
    k = 9;
    printf("b\n");
    printf("%d\n", i - 7 && j++ < k);
    printf("%d\t%d\t%d\n", i, j, k);

    i = 7;
    j = 8;
    k = 9;
    printf("c\n");
    printf("%d\n", (i = j) || (j = k));
    printf("%d\t%d\t%d\n", i, j, k);

    i = 1;
    j = 1;
    k = 1;
    printf("d\n");
    printf("%d\n", ++i || ++j && ++k);
    printf("%d\t%d\t%d\n", i, j, k);

    return 0;
}
