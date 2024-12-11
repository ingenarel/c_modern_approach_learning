#include <stdio.h>
#include <math.h>

int polynominal(int x){
    return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}

int main(void){
    int x;
    printf("Enter x => "); scanf("%d", &x);
    printf("%d", polynominal(x));

    return 0;
}
