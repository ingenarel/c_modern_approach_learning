#include <limits.h>
#include <stdio.h>

int main(void){
    printf("char = %d ... %d\t\t\tunsigned = 0 ... %d\n", CHAR_MIN, CHAR_MAX, UCHAR_MAX);
    printf("short = %d ... %d\t\tunsigned = 0 ... %d\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("int = %d ... %d\tunsigned = 0 ... %u\n", INT_MIN, INT_MAX, UINT_MAX);

    return 0;
}
