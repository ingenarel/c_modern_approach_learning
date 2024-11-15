#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool pm = false;
    int hour, minute;

    printf("Enter a 24 hour time => ");
    scanf("%d:%d", &hour, &minute);

    if (hour >= 12){
        pm = true;
    }
    if (hour > 13){
        hour -= 12;
    }
    printf("%d:%d ", hour, minute);

    switch(pm){
        case false:
            printf("AM\n");
            break;
        case true:
            printf("PM\n");
            break;
    }

    return 0;
}
