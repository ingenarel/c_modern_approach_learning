#include <stdio.h>

int main(void){
    for (int i = 5, j = i -1; i > 0, j > 0; --i, j = i - 1){
        printf("%d\n", i);
    }

    // i 5; j 4
    // i > 0 -> value gets discarded
    // j > 0 -> 1

    //5
    // i 4; j 3

    // j > 0 -> 1
    //
    // 4
    // 3
    // 2

    return 0;
}
