#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

signed char rollDice(void){
    return rand() % 6 + 1;
}

bool playGame(void){
    unsigned char point = rollDice() + rollDice();   
    printf("You rolled %hhu\n", point);
    switch(point){
        case 7: case 11:
            printf("You win\n\n");
            return 1;
        case 2: case 3: case 12:
            printf("You lose\n\n");
            return 0;
        default:
            printf("Your point is %hhu\n", point);
            break;
    }
    for (;;){
        unsigned char nextRoll = rollDice() + rollDice();
        printf("You rolled %hhu\n", nextRoll);
        if (nextRoll == point){
            printf("You win\n\n");
            return 1;
        }
        if (nextRoll == 7){
            printf("You lose\n\n");
            return 0;
        }
    }
}

int main(void){
    srand(time(NULL));
    unsigned short wins = 0,
                 losses = 0
    ;
    for(char ans;;){
        if(playGame())
            wins++;
        else
            losses++;
        printf("Play again? "); ans = getchar();
        getchar();
        if(toupper(ans) != 'Y')
            break;
    }

    printf("Wins = %hu\tLosses = %hu\n", wins, losses);

    return 0;
}
