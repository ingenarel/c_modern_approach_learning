#include <stdio.h>
#include <ctype.h>

int main(void){
    int count = 0;
    char letter;

    printf("Enter a sentence => ");

    do{
        letter = toupper(getchar());
        switch(letter){
            case 'A': case 'E': case 'I': case 'O': case 'U': 
                count++;
                break;
            default:
                break;
        }
    }while(letter != '\n');

    printf("Your sentence contains %d vowels\n", count);

    return 0;
}
