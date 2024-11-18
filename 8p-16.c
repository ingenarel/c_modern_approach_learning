#include <stdio.h>
#include <ctype.h>

int main(void){
    short letterSeen[26] = {0};
    char currentChar;

    printf("Enter the first word => ");
    
    while((currentChar = toupper(getchar())) != '\n'){
        if (currentChar >= 'A' || currentChar <= 'Z')
            letterSeen[currentChar % 'A']++;
    }

    printf("Enter the second word => ");
    
    while((currentChar = toupper(getchar())) != '\n'){
        if (currentChar >= 'A' || currentChar <= 'Z')
            letterSeen[currentChar % 'A']--;
    }

    for (signed char i = 0; i < 26; i++){
        if (letterSeen[i] != 0){
            printf("The words are not anagrams");
            return 0;
        }
    }

    printf("The words are anagrams");

    return 0;
}
