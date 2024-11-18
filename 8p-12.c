#include <stdio.h>
#include <ctype.h>

#define ARR_LEN(n) (int) (sizeof(n) / sizeof(n[0]))

int main(void){
    const char scrabbleValueList[][2] = {
        {'A', 1}, {'E', 1}, {'I', 1}, {'L', 1}, {'N', 1}, {'O', 1}, {'R', 1}, {'S', 1}, {'T', 1}, {'U', 1},
        {'D', 2}, {'G', 2},
        {'B', 3}, {'C', 3}, {'M', 3}, {'P', 3},
        {'F', 4}, {'H', 4}, {'V', 4}, {'W', 4}, {'Y', 4},
        {'K', 5},
        {'J', 8}, {'X', 8},
        {'Q', 10}, {'Z', 10},

    };

    char currentChar;
    int inputWordValue = 0;

    printf("Enter a word => ");

    while((currentChar = toupper(getchar())) != '\n'){
        for (unsigned char i = 0; i < ARR_LEN(scrabbleValueList); i++){
            if (scrabbleValueList[i][0] == currentChar){
                inputWordValue += scrabbleValueList[i][1];
                break;
            }
        }
    }


    printf("Scrabble value: %d", inputWordValue);

    return 0;
}
