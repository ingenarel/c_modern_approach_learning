#include <stdio.h>

int main(void){
    int digit_seen[10] = {}, inputNum;

    printf("Enter an int => ");
    scanf("%d", &inputNum);

    for(int digit; inputNum > 0; inputNum /= 10, digit_seen[digit]++)
        digit = inputNum % 10;

    printf("Repeated digit(s):");
    for (int i = 0; i < 10; i++){
        if (digit_seen[i] > 1)
            printf(" %d", i);
    }

    return 0;
}
