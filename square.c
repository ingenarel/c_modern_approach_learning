#include <stdio.h>

int main(void){
    int num;

    printf("Enter number of entries in table => ");
    scanf("%d", &num);

    int i = 1;
    while(i <= num){
        printf("%10d%20d\n", i, i*i);
        ++i;
    }

    return 0;
}
