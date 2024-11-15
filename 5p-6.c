#include <stdio.h>

int main(void){
    int a,
        b, c, d, e, f,
        g, h, i, j, k,
        userUpc, actualUpc;

    printf("Enter UPC code => ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
            &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&userUpc
    );

    actualUpc = 9 - (((a+c+e+g+i+k) * 3 + b+d+f+h+j) - 1) % 10;

    if (userUpc == actualUpc){
        printf("VALID!\n");
    }else {
        printf("NOT VALID!!\n");
    }

    return 0;
}
