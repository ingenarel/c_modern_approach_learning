#include <stdio.h>
#include <ctype.h>

#define H *60
#define COM - inputTime > 0

int main(void){
    int inputHour, inputMinute, inputTime;
    char amPm;

    printf("Enter a 12 hour time (hour:min *(p|a)m?) => ");
    scanf("%d:%d", &inputHour, &inputMinute);

    while ((amPm = toupper(getchar())) == ' ');

    switch(amPm){
        case 'A':
            inputTime = inputHour H + inputMinute;
            break;
        case 'P':
            inputTime = inputHour H + 12 H + inputMinute;
            break;
        default:
            printf("NOT A VALID TIME FORMAT GIVEN!!!!\n");
            return 1;
    }

    printf("Closest departure time is ");
    if (8 H COM){
        printf("8:00 AM, arriving at 10:15 AM");
    }else if (9 H + 43 COM){
        printf("9:43 AM, arriving at 11:52 AM");
    }else if (11 H + 19 COM){
        printf("11:19 AM, arriving at 1:31 PM");
    }else if (12 H + 47 COM){
        printf("12:47 PM, arriving at 3:00 PM");
    }else if (12 H + 2 H COM){
        printf("2:00 PM, arriving at 4:08 PM");
    }else if (12 H + 3 H + 45 COM){
        printf("3:45 PM, arriving at 5:55 PM");
    }else if (12 H + 7 H COM){
        printf("7:00 PM, arriving at 9:20 PM");
    }else if (12 H + 9 H + 45 COM){
        printf("9:45 PM, arriving at 11:58 PM");
    }else{
        printf("8:00 AM, arriving at 10:15 AM");
    }

    return 0;
}
