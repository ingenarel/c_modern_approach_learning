#include <stdio.h>

int main(void){
    printf("%d\t%d\n", '\b', '\x8');
    printf("%d\t%d\n", '\n', '\xa');
    printf("%d\t%d\n", '\r', '\xd');
    printf("%d\t%d\n", '\t', '\x9');

    return 0;
}
