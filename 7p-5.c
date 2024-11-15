#include <stdio.h>
#include <ctype.h>

int main(void){
    char inputChar;
    int scrabbleValue = 0;

    printf("Enter a word => ");

    do{
        inputChar = toupper(getchar());
        switch(inputChar){
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                scrabbleValue++;
                break;
            case 'D': case 'G':
                scrabbleValue += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                scrabbleValue += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                scrabbleValue += 4;
                break;
            case 'K':
                scrabbleValue += 5;
                break;
            case 'J': case 'X':
                scrabbleValue += 8;
                break;
            case 'Q': case 'Z':
                scrabbleValue += 10;
                break;
            default:
                break;
        }
    }while(inputChar != '\n');

    printf("scrabble value: %d", scrabbleValue);

    return 0;
}
