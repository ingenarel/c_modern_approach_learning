#include <stdio.h>

int main(void){
    int daysInMonth, monthStartDay, weekNewline = 1;

    printf("Enter number of days in a month => ");
    scanf("%d", &daysInMonth);

    printf("Enter starting day of the month (1=Sunday; 7=Saturday)=> ");
    scanf("%d", &monthStartDay);

    for (int i = 0; i < monthStartDay; i++, weekNewline++)
        printf("   ");

    for (int i = 1; i <= daysInMonth; i++, weekNewline++){
        printf("%2d ", i);
        if (weekNewline % 7 == 0)
            printf("\n");
    }

    return 0;
}
