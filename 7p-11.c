#include <stdio.h>
#include <ctype.h>

int main(void){
    char initial, letterInLastName;

    printf("Enter first and last name => ");

    // only reads the first letter and stores it to 'initial'. skips whitespaces before it.
    while((initial = toupper(getchar())) == ' ');

    // skips everthing until it reaches a whitespace
    while(getchar() != ' ');

    // skips everthing until it reaches a letter, stores it to `letterInLastName`
    while((letterInLastName = toupper(getchar())) == ' ');
    putchar(letterInLastName);

    while((letterInLastName = getchar()) != ' ')
        putchar(letterInLastName);

    printf(", %c.", initial);

    return 0;
}
