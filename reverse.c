#include <stdio.h>
#define LENGTH_OF_a 10

int main(void){
    int a[LENGTH_OF_a];
    
    printf("Enter %d numbers: ", LENGTH_OF_a);
    for (int i = 0; i < LENGTH_OF_a; i++){
        scanf("%d", &a[i]);
    }

    printf("In reversed order: ");
    for (int i = LENGTH_OF_a - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }

    return 0;
}
