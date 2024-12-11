#include <stdio.h>

int main(void){
    int day, month, year;
    printf("date => ");
    scanf_s("%d/%d/%d", &month, &day, &year);
    printf("output => %d%.2d%.2d\n", year, month, day);

    return 0;
}
