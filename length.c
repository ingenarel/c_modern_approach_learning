#include <stdio.h>

int main(void){
    int len;
    printf("Enter a msg => ");
    for(len = 0; getchar() != '\n'; len++);

    printf("length of the msg: %d char(s)", len);

    return 0;
}
