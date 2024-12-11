#include <stdio.h>
#include <stdbool.h>

#define H *60
#define COM - inputTime > 0
#define ARR_LEN(n) (int) (sizeof(n) / sizeof(n[0]))

int main(void){
    const bool debug = 0;
    const short PlaneTimes[][2] = {
        {480 , 616 }, // {8  H,                  10 H +        16},
        {583 , 712 }, // {9  H +       43,       11 H +        52},
        {679 , 91  }, // {11 H +       19,       12 H + 1  H + 31},
        {767 , 180 }, // {12 H +       47,       12 H + 3  H},
        {840 , 968 }, // {12 H + 2 H,            12 H + 4  H + 8},
        {945 , 1075}, // {12 H + 3 H + 45,       12 H + 5  H + 55},
        {1140, 1280}, // {12 H + 7 H,            12 H + 9  H + 20},
        {1305, 1438} // {12 H + 9 H + 45,       12 H + 11 H + 58},
    };
    short inputTime;
    char inputHour, inputMinute, minTimeDiff;

    if (debug){
        printf("PlaneTimes:\n");
        for (char y = 0; y < ARR_LEN(PlaneTimes); y++){
            for (char x = 0; x < 2; x++)
                printf("%hd\t", PlaneTimes[y][x]);
            putchar('\n');
        }
    }

    printf("Enter a 24 hour time => ");
    scanf("%hhd:%hhd", &inputHour, &inputMinute);

    inputTime = inputHour H + inputMinute;

    if (debug)
        printf("inputTime = %hd\n", inputTime);

    printf("Closest departure time is ");
    for (minTimeDiff = 0; minTimeDiff < ARR_LEN(PlaneTimes); minTimeDiff++){
        if ((PlaneTimes[minTimeDiff][0] - inputTime) > 0)
            break;
    }
    if (minTimeDiff > 7){
        printf("%hd:%.2hd AM, arriving at %hd:%.2hd AM\n",
            PlaneTimes[0][0] / 60, PlaneTimes[0][0] % 60, PlaneTimes[0][1] / 60, PlaneTimes[0][1] % 60);
        return 0;
    }

    if (debug)
        printf("minTimeDiff = %hhd\n", minTimeDiff);

    if (minTimeDiff > 3)
        printf("%hd", PlaneTimes[minTimeDiff][0] / 60 - 12);
    else
        printf("%hd", PlaneTimes[minTimeDiff][0] / 60);

    printf(":%.2hd ", PlaneTimes[minTimeDiff][0] % 60);

    if (minTimeDiff > 2)
        printf("PM");
    else
        printf("AM");
    printf(", arriving at ");

    if (minTimeDiff > 1)
        printf("%hd:%.2hd PM\n", PlaneTimes[minTimeDiff][1] / 60 - 12, PlaneTimes[minTimeDiff][1] % 60);
    else
        printf("%hd:%.2hd AM\n", PlaneTimes[minTimeDiff][1] / 60, PlaneTimes[minTimeDiff][1] % 60);

    return 0;
}
