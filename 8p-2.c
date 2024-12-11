#include <stdio.h>

int main(void){
    int digit_seen[10] = {}, inputNum;

    printf("Enter an int => "); scanf("%d", &inputNum);

    for(int digit; inputNum > 0; inputNum /= 10, digit_seen[digit]++)
        digit = inputNum % 10;

    printf("Digit:         0  1  2  3  4  5  6  7  8  9\nOccurrences: ");
    for (int i = 0; i < 10; i++)
        printf("%3d", digit_seen[i]);

    return 0;
}
