#include <stdio.h>
#define NUMLEN 15

int main(void) { 
    char c;
    char number[NUMLEN];

    for (int i = 0; i < NUMLEN; i++)
        number[i] = ' ';

    printf("Enter a phone number => ");

    for(int i = 0;(c = getchar()) != '\n'; i++){
        switch(c){
            case 'A': case 'B': case 'C':
                number[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                number[i] = '3';
                break;
            case 'G': case 'H': case 'I':
                number[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                number[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                number[i] = '6';
                break;
            case 'P': case 'R': case 'S':
                number[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                number[i] = '8';
                break;
            case 'W': case 'X': case 'Y':
                number[i] = '9';
                break;
            default:
                number[i] = c;
                break;
        }
    }

    printf("In numric form: ");
    for (int i = 0; i < NUMLEN; i++)
        putchar(number[i]);
    putchar('\n');

    return 0;
}
