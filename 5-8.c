#include <stdio.h>
#include <stdbool.h>

int main(void){
    int age = 20;
    bool teenager = (age >= 13 && age <= 19) ? true:false;
    printf("%d\n", teenager);

    return 0;
}
