#include <stdio.h>

int main(void){
    int a, b, c, d, e, f,
        g, h, i, j, k, l;

    printf("Enter first 12 numbers of the UPC code => ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
            &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l
    );

    printf("Check digit: %d\n",
        9 - (((b+d+f+h+j+l)*3 + (a+c+e+g+i+k) - 1) % 10)
    );

    return 0;
}
