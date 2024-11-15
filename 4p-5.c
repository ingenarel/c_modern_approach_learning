#include <stdio.h>

int main(void){
    int a,
        b, c, d, e, f,
        g, h, i, j, k;

    printf("Enter first 11 numbers of the UPC code => ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
            &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k
    );

    printf("Check digit: %d\n",
        9 - (((a+c+e+g+i+k) * 3 + b+d+f+h+j) - 1) % 10
    );

    return 0;
}
