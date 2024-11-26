#include <stdio.h>

double inner_product(double a[], double b[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i] * b[i];
    return sum;
}

int main(void){
    printf("%g", inner_product((double[]){1, 2, 3}, (double[]){4, 5, 6}, 3));
    //  4
    // 10
    // 18
    // 32

    return 0;
}
