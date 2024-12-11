#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int letterCount[static 26]){
    char currentChar;
    while((currentChar = toupper(getchar())) != '\n')
        if (currentChar >= 'A' || currentChar <= 'Z')
            letterCount[currentChar % 'A']++;
}

bool equalArray(const int firstWord[static 26], const int secondWord[static 26]){
    for (int i = 0; i < 26; i++)
        if (firstWord[i] != secondWord[i])
            return 0;
    return 1;
}

int main(void){
    int firstWord[26] = {0},
        secondWord[26] = {0};

    printf("Enter the first word => "); read_word(firstWord);
    printf("Enter the second word => "); read_word(secondWord);

    if(equalArray(firstWord, secondWord))
        printf("The words are anagrams");
    else
        printf("The words are not anagrams");

    return 0;
}
