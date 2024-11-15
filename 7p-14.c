#include <stdio.h>
#include <math.h>

int main(void){
    double x, y = 1;

    printf("Enter a positive number => ");
    scanf("%lf", &x);

    do{
        y = (y + x/y) / 2;
    }while(fabs(y - ((y + x/y) / 2)) > .00001);

    printf("Square root: %f", y);

    return 0;
}
