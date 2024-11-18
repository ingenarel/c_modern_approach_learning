#include <stdio.h>

#define MAX_MSG_LEN 80

int main(void){
    char inputMsg[MAX_MSG_LEN] = {0}, shiftAmmount, currentChar;

    printf("Enter msg to be encrypted (max 80 chars) => ");

    for (int i = 0; i < MAX_MSG_LEN; i++){
        currentChar = getchar();
        if (currentChar == '\n')
            break;
        inputMsg[i] = currentChar;
    }

    printf("Enter shift ammount (0-25) => "); scanf("%hhd", &shiftAmmount);

    for (int i = 0; i < MAX_MSG_LEN; i++){
        if (inputMsg[i] >= 'A' && inputMsg[i] <= 'Z')
            printf("%c", (inputMsg[i] - 'A' + shiftAmmount) % 26 + 'A');
        else if (inputMsg[i] >= 'a' && inputMsg[i] <= 'z')
            printf("%c", (inputMsg[i] - 'a' + shiftAmmount) % 26 + 'a');
        else
            printf("%c", inputMsg[i]);
    }

    return 0;
}
