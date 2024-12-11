#include <stdio.h>

int main(void){
    printf("%d\t%d\n", '\b', '\10');
    printf("%d\t%d\n", '\n', '\12');
    printf("%d\t%d\n", '\r', '\15');
    printf("%d\t%d\n", '\t', '\11');

    return 0;
}
