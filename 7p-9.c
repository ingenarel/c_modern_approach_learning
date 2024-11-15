#include <stdio.h>
#include <ctype.h>

int main(void){
    int hour, minute;
    char amPm;

    printf("Enter a 12 hour time (hour:min *(p|a)m?) => ");
    scanf("%d:%d", &hour, &minute);

    while ((amPm = toupper(getchar())) == ' ');

    printf("Equivalent 24 hour time: ");

    switch(amPm){
        case 'A':
            printf("%d:%d", hour, minute);
            break;
        case 'P':
            printf("%d:%d", hour+12, minute);
            break;
        default:
            printf("NOT A VALID TIME FORMAT GIVEN!!!!\n");
            return 1;
    }

    return 0;
}
