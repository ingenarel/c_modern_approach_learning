#include <stdio.h>

int main(void){
    int words = 1, charsExceptWhitespace = 0;

    printf("Enter a sentence => ");

    for (char c; (c = getchar()) != '\n';){
        switch(c){
            case ' ':
                words++;
            break;
            default:
                charsExceptWhitespace++;
                break;
        }
    }

    printf("Average word length: %.1f\n", (float) charsExceptWhitespace / words);

    return 0;
}
