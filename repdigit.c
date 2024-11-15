#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool digit_seen[10] = {false};
    int inputNum;

    printf("Enter an int => ");
    scanf("%d", &inputNum);

    for(int digit;inputNum > 0; inputNum /= 10, digit_seen[digit] = true){
        digit = inputNum % 10;
        if (digit_seen[digit]){
            printf("Repeated digit\n");
            return 0;
        }
    }
    printf("No repeated digits");
    
    return 0;
}
