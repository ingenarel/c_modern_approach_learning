#include <stdio.h>
#include <stdbool.h>

int main(void){
    int a_day, a_month, a_year,
        b_day, b_month, b_year;

    bool firstDateIsNew;

    printf("Enter first date (mm/dd/yy) => ");
    scanf("%d/%d/%d", &a_month, &a_day, &a_year);

    printf("Enter second date (mm/dd/yy) => ");
    scanf("%d/%d/%d", &b_month, &b_day, &b_year);

    firstDateIsNew =  (a_year > b_year) ? true : (a_month > b_month) ? true : (a_day > b_day) ? true : false;

    if (firstDateIsNew == false){
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", a_month, a_day, a_year, b_month, b_day, b_year);
    }else{
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", b_month, b_day, b_year, a_month, a_day, a_year);
    }

    return 0;
}
