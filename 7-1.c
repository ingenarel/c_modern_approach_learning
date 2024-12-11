#include <stdio.h>

int main(void){

    printf("octal 007 = %d\n", 077);
    // 7 = 7 * 8^0 =  7
    // 7 = 7 * 8^1 = 56
    // 0 = 0 * 8^2 =  0
    //             = 63

    printf("hex 77 = %d\n", 0x77);
    // 7 = 7 * 16^0 =   7
    // 7 = 7 * 16^1 = 112
    //              = 119

    return 0;
}
