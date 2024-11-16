#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_LEN_inHand_RANK 13
#define ARR_LEN_inHand_SUIT 4

int main(void){
    bool inHand[ARR_LEN_inHand_SUIT][ARR_LEN_inHand_RANK] = {};
    char numOfCards, currentSuit, currentRank;

    srand(time(NULL));

    printf("\nEnter number of cards (smaller than 53) => "); scanf("%hhi", &numOfCards);

    if (numOfCards > 52){
        printf("Number of cards can't be bigger than 52");
        return 1;
    }

    printf("Your hand: ");

    while(numOfCards > 0){
        currentSuit = rand() % ARR_LEN_inHand_SUIT;
        currentRank = rand() % ARR_LEN_inHand_RANK;
        if (inHand[currentSuit][currentRank] == false){
            switch(currentRank){
                case 0:
                    printf("Ace");
                    break;
                case 10:
                    printf("King");
                    break;
                case 11:
                    printf("Queen");
                    break;
                case 12:
                    printf("Joker");
                    break;
                default:
                    printf("%d", currentRank+1);
                    break;
            }
            printf(" of ");
            switch(currentSuit){
                case 0:
                    printf("Clubs");
                    break;
                case 1:
                    printf("Diamonds");
                    break;
                case 2:
                    printf("Hearts");
                    break;
                case 3:
                    printf("Spades");
                    break;
                default:
                    break;
            }
            if (numOfCards != 1){
                printf(", ");
            }
            inHand[currentSuit][currentRank] = true;
            numOfCards--;
        }
    }

    printf("\n");

    return 0;
}
