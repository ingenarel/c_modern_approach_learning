#include <stdio.h>
// the book says that this shouldn't work but it works????

int main(void){
    int a,
        b, c, d, e, f,
        g, h, i, j, k;

    printf("Enter first single digit => ");
    scanf("%1d", &a);

    printf("Enter first group of five digits => ");
    scanf("%1d%1d%1d%1d%1d",
            &b,&c,&d,&e,&f
    );

    printf("Enter second group of five digits => ");
    scanf("%1d%1d%1d%1d%1d",
            &g,&h,&i,&j,&k
    );

    printf("Check digit: %d\n",
        10 - ((a+c+e+g+i+k) * 3 + b+d+f+h+j) % 10
    );

    return 0;
}
