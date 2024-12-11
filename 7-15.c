#include <stdio.h>
#include <limits.h>

int main(void){
    typedef signed char Int8;
    typedef short Int16;
    typedef int Int32;

    printf("largest signed 8 bit int: %d\n", 0b01111111);
    printf("max signed char (my device): %d\n", CHAR_MAX);

    printf("largest signed 16 bit int: %d\n", 0b0111111111111111);
    printf("max signed short (my device) %d\n", SHRT_MAX);

    printf("largest signed 32 bit int: %d\n", 0b01111111111111111111111111111111);
    printf("max signed int (my device) %d\n", INT_MAX);

    return 0;
}
