#include <stdio.h>

int main(void){
    float loan, interestRate, monthlyPayment;
    int numberOfPayments;

    printf("Enter ammount of loan => ");
    scanf("%f", &loan);

    printf("Enter interest rate => ");
    scanf("%f", &interestRate);

    printf("Enter monthly payment => ");
    scanf("%f", &monthlyPayment);

    printf("Enter number of payments => ");
    scanf("%d", &numberOfPayments);

    for(int i = 1; i <= numberOfPayments && loan > 0; i++){
        loan = (loan - monthlyPayment) + (loan * interestRate / 1200);
        printf("Balence after payment number %d: %.2f\n", i, loan);
    }

    return 0;
}
