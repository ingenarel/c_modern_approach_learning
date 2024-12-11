#include <stdio.h>
#include <ctype.h>

#define NAMELEN 20

int main(void){
    char initial, letterInLastName[NAMELEN] = {0}, currentChar;

    printf("Enter first and last name => ");

    // only reads the first letter and stores it to 'initial'. skips whitespaces before it.
    while((initial = toupper(getchar())) == ' ')
        ;

    // skips everthing until it reaches a whitespace
    while(getchar() != ' ')
        ;

    // skips everthing until it reaches a letter, stores it to `letterInLastName`
    while((currentChar = toupper(getchar())) == ' ')
        ;
    letterInLastName[0] = currentChar;

    for (int i = 1; i < 20; i++){
        currentChar = getchar();
        switch(currentChar){
            case ' ':
                goto print_name;
            case '\n':
                goto print_name;
            default:
                letterInLastName[i] = currentChar;
                break;
        }
    }

    print_name:
    for (int i = 0; i < NAMELEN; i++){
        if (letterInLastName[i] == 0)
            break;
        putchar(letterInLastName[i]);
    }
    printf(", %c.", initial);

    return 0;
}
