#include <stdio.h>

double averageDD(double a, double b){
    return (a + b) / 2;
}

int main(void){
    double inputNum1, inputNum2, inputNum3;

    printf("Enter 3 numbers => "); scanf("%lf %lf %lf", &inputNum1, &inputNum2, &inputNum3);

    printf("Average of\n");
    printf("%g and %g : %g\n", inputNum1, inputNum2, averageDD(inputNum1, inputNum2));
    printf("%g and %g : %g\n", inputNum1, inputNum3, averageDD(inputNum1, inputNum3));
    printf("%g and %g : %g\n", inputNum2, inputNum3, averageDD(inputNum2, inputNum3));

    return 0;
}
