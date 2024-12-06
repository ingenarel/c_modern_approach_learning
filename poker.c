// did a custom version cz why not...

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_CARD_READ 5
#define NUM_RANKS 13
#define NUM_SUITS 4

//EXTERNAL VARS; bad code :)
bool isStraight, isFlush, isThreeOfAKind, isFourOfAKind;
unsigned char pairs;

void readCards(unsigned char numInRanks[], unsigned char numInSuits[]){// {{{
    bool cardExists[NUM_SUITS][NUM_RANKS] = {0};
    for (unsigned char i = 0; i < MAX_CARD_READ;){
        printf("Enter Card number %hhu => ", i+1);
        char inputSuit, inputRank;
        unsigned char suit, rank;
        bool badcard = 0;

        do{
            inputRank = toupper(getchar());
        }while(inputRank == ' ' || inputRank == '\n' || inputRank == '\t');

        switch(toupper(inputRank)){
            case '0':
                exit(0);
                break;
            case 'A':
                rank = 0;
                break;
            case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                rank = inputRank - '1';
                break;
            case 'T':
                rank = 9;
                break;
            case 'K':
                rank = 10;
                break;
            case 'Q':
                rank = 11;
                break;
            case 'J':
                rank = 12;
                break;
            default:
                badcard = 1;
        }

        switch(inputSuit = toupper(getchar())){
            case 'C':
                suit = 0;
                break;
            case 'D':
                suit = 1;
                break;
            case 'H':
                suit = 2;
                break;
            case 'S':
                suit = 3;
                break;
            default:
                badcard = 1;
        }

        if(badcard){
            printf("'%c%c' is a bad card. Please enter another card to replace it\n", inputRank, inputSuit);
            continue;
        }

        if(cardExists[suit][rank]){
            printf("'%c%c' is a duplicate card. Please enter another card to replace it\n", inputRank, inputSuit);
            continue;
        }

        numInRanks[rank]++; numInSuits[suit]++; cardExists[suit][rank] = 1;
        i++;
    }

    while(getchar() != '\n');
}// }}}

void analyzeHand(const unsigned char numInRanks[], const unsigned char numInSuits[]){// {{{
    
    // checks for a flush
    for (unsigned char suit = 0; suit < NUM_SUITS; suit++){
        if(numInSuits[suit] == MAX_CARD_READ){
            isFlush = 1;
            break;
        }
    }

    unsigned char rank = 0;

    while(numInRanks[rank] == 0)
        rank++;
    
    // checks for a straight
    unsigned char consecutiveCards = 0;
    for(; rank < NUM_RANKS && numInRanks[rank] > 0; rank++)
        consecutiveCards++;

    if(consecutiveCards == MAX_CARD_READ){
        isStraight = 1;
        return;
    }

    // checks for four of a kind, three of a kind, pairs;
    for(rank = 0; rank < NUM_RANKS; rank++){
        if (numInRanks[rank] == 4){
            isFourOfAKind = 1;
            return;
        }
        if (numInRanks[rank] == 3){
            isThreeOfAKind = 1;
        }
        if (numInRanks[rank] == 2){
            pairs++;
        }
    }
}// }}}

void printResult(void){
    if (isStraight && isFlush)
        printf("Straight flush");
    else if (isFourOfAKind)
        printf("Four of a kind");
    else if(isThreeOfAKind && pairs == 1)
        printf("Full house");
    else if(isFlush)
        printf("Flush");
    else if(isStraight)
        printf("Straight");
    else if(isThreeOfAKind)
        printf("Three of a kind");
    else if(pairs == 2)
        printf("Two pairs");
    else if(pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("!!!\n\n");
}

int main(void){
    unsigned char numInRanks[NUM_RANKS] = {0},
                  numInSuits[NUM_SUITS] = {0}
    ;

    for (;;){
        isStraight = 0; isFlush = 0; isThreeOfAKind = 0; isFourOfAKind = 0; pairs = 0;
        // printf("Enter 5 cards => ");
        readCards(numInRanks, numInSuits);
        putchar('\n');
        analyzeHand(numInRanks, numInSuits);
        // printf("isStraight = %d\nisFlush = %d\nisThreeOfAKind = %d\n isFourOfAKind = %d\n pairs = %d\n\n", isStraight, isFlush, isThreeOfAKind, isFourOfAKind, pairs);
        printResult();
    }

    return 0;
}
