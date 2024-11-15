#include <stdio.h>

int main(void){
    char ch;

    while((ch = getchar()) == ' ');

    printf("%c", ch);

    return 0;
}
