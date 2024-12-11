#include <stdio.h>

unsigned short dayOfYear(unsigned char month, unsigned short day, unsigned short year){
    switch(month){
        case 12: day += 31; // fall through
        case 11: day += 30; // fall through
        case 10: day += 31; // fall through
        case 9:  day += 30; // fall through
        case 8:  day += 31; // fall through
        case 7:  day += 31; // fall through
        case 6:  day += 30; // fall through
        case 5:  day += 31; // fall through
        case 4:  day += 30; // fall through
        case 3:  day += 31; // fall through
        case 2:
            if (year % 4 == 0)
                day += 29;
            else
                day += 28;
            // fall through
        case 1: day += 31; // fall through
        default: break;
    }
    return day;
}

int main(void){
    printf("%hu", dayOfYear(11, 14, 2006));

    return 0;
}
