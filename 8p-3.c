#include <stdio.h>

int main(void){
    int digit_seen[10] = {};
    char x;

    printf("Enter a number => ");
    do{
        x = getchar();
        if (x > '0' && x <= '9')
            digit_seen[x-'1']++;
    }while(x != '0');

    printf("Digit:         0  1  2  3  4  5  6  7  8  9\nOccurrences: ");
    for (int i = 0; i < 10; i++)
        printf("%3d", digit_seen[i]);

    return 0;
}
