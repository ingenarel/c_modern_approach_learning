#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100


void initNumGen(void){
    srand(time(NULL));
}

int chooseNewSecretNum(void){
    return rand() % MAX_NUMBER + 1;
}

void readGuesses(int secretNumber){
    int guess,
        numGuesses = 0
    ;
    for (;;){
        numGuesses++;
        printf("Enter guess => "); scanf("%d", &guess);
        if (guess > secretNumber){
            printf("Too big\n");
            continue;
        }else if (guess < secretNumber){
            printf("Too small\n");
            continue;
        }else{
            printf("You won in %d guesses\n", numGuesses);
            break;
        }
    }
}

int main(void){
    char command;
    printf("Guess the secret number between 1 and %d\n", MAX_NUMBER);

    initNumGen();

    do{
        int secretNumber = chooseNewSecretNum();
        // printf("CHEAT secretNumber = %d\n", secretNumber);
        printf("A new number has been chosen\n");
        readGuesses(secretNumber);
        printf("Play again? "); scanf(" %c", &command);
        putchar('\n');
    }while(toupper(command) == 'Y');

    return 0;
}
