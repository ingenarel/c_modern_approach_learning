#include <stdio.h>

int main(void){
    int i, j;
    
    i = 6;
    j = i += i;
    printf("a\n");
    printf("%d\t%d\n", i, j);

    i = 5;
    j = (i -= 2) + 1;
    printf("b\n");
    printf("%d\t%d\n", i, j);

    i = 7;
    j = 6 + (i = 2.5);
    printf("c\n");
    printf("%d\t%d\n", i, j);

    i = 2;
    j = 6 + (i = 6) + (j = 3);
    printf("d\n");
    printf("%d\t%d\n", i, j);

    return 0;
}
