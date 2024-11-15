#include <stdio.h>

int main(void){
    int sum = 0;

    for (int i = 0; i < 10; i++){
        if (i % 2){
            // printf("%i yes\n", i);
            continue;
        }
        // printf("%i no\n", i);
        sum += 1;
    }

    // i 0; sum 1
    // i 1; sum 1
    // i 2; sum 2
    // i 3; sum 2
    // i 4; sum 3
    // i 5; sum 3
    // i 6; sum 4
    // i 7; sum 4
    // i 8; sum 5
    // i 9; sum 5

    printf("%d\n", sum);

    return 0;
}
