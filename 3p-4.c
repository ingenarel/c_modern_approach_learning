#include <stdio.h>

int main(void){
    int code, first_part, last_part;
    printf("Enter phone number [(xxx) xxx-xxxx] => ");
    scanf("(%d) %d-%d", &code, &first_part, &last_part);
    printf("You entered %d.%d.%d\n", code, first_part, last_part);

    return 0;
}
