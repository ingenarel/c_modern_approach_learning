#include <stdio.h>

int main(void){
    for (int i = 0; i < 10; i++){
        printf("%d", i);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i){
        printf("%d", i);
    }
    printf("\n");

    for (int i = 0; i++ < 10;){
        printf("%d", i);
    }

    return 0;
}
