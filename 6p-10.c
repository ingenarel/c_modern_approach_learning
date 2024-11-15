#include <stdio.h>
#include <stdbool.h>

int main(void){
    int inputDay, inputMonth, inputYear,
        maxDay = 0, maxMonth = 0, maxYear = 0;

    do{
        printf("Enter a date (mm/dd/yy) => ");
        scanf("%d/%d/%d", &inputMonth, &inputDay, &inputYear);

        if (maxYear <= inputYear){
            maxYear = inputYear; maxMonth = inputMonth; maxDay = inputDay;
        }else if (maxMonth <= inputMonth){
            maxYear = inputYear; maxMonth = inputMonth; maxDay = inputDay;
        }else if (maxDay < inputDay){
            maxYear = inputYear; maxMonth = inputMonth; maxDay = inputDay;
        }
    }while(inputMonth != 0 && inputDay != 0 && inputYear != 0);

    printf("%d/%.2d/%.2d is the earliest date", maxMonth, maxDay, maxYear);

    return 0;
}
