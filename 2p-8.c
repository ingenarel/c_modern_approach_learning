#include <stdio.h>

int main(void){
    float loan, interestRate, monthlyPayment;

    printf("Enter ammount of loan => ");
    scanf("%f", &loan);

    printf("Enter interest rate => ");
    scanf("%f", &interestRate);

    printf("Enter monthly payment => ");
    scanf("%f", &monthlyPayment);

    loan = (loan - monthlyPayment) + (loan * interestRate / 1200);
    printf("Balence after first payment: %.2f\n", loan);

    loan = (loan - monthlyPayment) + (loan * interestRate / 1200);
    printf("Balence after second payment: %.2f\n", loan);

    loan = (loan - monthlyPayment) + (loan * interestRate / 1200);
    printf("Balence after third payment: %.2f\n", loan);

    return 0;
}
