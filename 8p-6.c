#include <stdio.h>
#include <ctype.h>

int main(void){
    // WHY THE FUCK WOULD I USE A FUCKING ARRAY WHEN I CAN JUST USE A SINGLE CHAR VAR???????????????
    char currentChar;

    printf("Enter msg => ");
    currentChar = toupper(getchar());


    printf("In B1FF-speak: ");
    goto convert_current_char;

    for(;;){
        currentChar = toupper(getchar());
        
        convert_current_char:
        switch(currentChar){
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            case '\n':
                goto end_getting_input;
            default:
                putchar(currentChar);
                break;
        }
    }
    end_getting_input:
    printf("!!!!!!!!!!\n");

    return 0;
}
