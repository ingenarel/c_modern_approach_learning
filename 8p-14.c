#include <stdio.h>
#define MAX_SENT_LEN 500

int main(void){
    char sentence[MAX_SENT_LEN] = {0}, currentChar, terminatingChar;

    printf("Enter a sentence (within 500 chars; sentences end on '.'/'?'/'!')\n=> ");

    for(int i = 0;i < MAX_SENT_LEN; i++){
        currentChar = getchar();
        if(currentChar == '.'||currentChar == '!'||currentChar == '?'){
            terminatingChar = currentChar;
            break;
        }
        sentence[i] = currentChar;
    }

    for (int i = MAX_SENT_LEN; i >= 0; i--){
        if (sentence[i] == ' '){
            for (int a = i+1;sentence[a] != 0; a++){
                if (sentence[a] == ' ')
                    break;
                putchar(sentence[a]);
            }
            putchar(' ');
        }
        if(i == 0){
            for (; sentence[i] != ' '; i++){
                putchar(sentence[i]);
            }
            break;
        }
    }
    putchar(terminatingChar);

    return 0;
}
