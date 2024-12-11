#include <stdio.h>

int main(void){

    int num;

    printf("Enter number of entries in the table => ");
    scanf("%d", &num);
    
    for (int square = 1, i = 1, odd = 3; i <= num; odd += 2){
        // printf("%10d%10d\n", i, square);
        printf("i = %d\nsquare = %d\nodd = %d\n\n\n", i, square, odd);
        ++i;
        square += odd;
    }

    return 0;
}
