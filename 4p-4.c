#include <stdio.h>

int main(void){
    int base10,
        a, b, c, d, e;

    printf("enter a base-10 number (0-32767) => ");
    scanf("%d", &base10);

    a = base10 % 8;
    b = base10 / 8 % 8;
    c = base10 / 8 / 8 % 8;
    d = base10 / 8 / 8 / 8 % 8;
    e = base10 / 8 / 8 / 8 / 8 % 8;

    printf("%d%d%d%d%d\n", e, d, c, b, a);

    return 0;
}
