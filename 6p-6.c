#include <stdio.h>

int main(void){
    int inputNum;

    printf("Enter a number => ");
    scanf("%d", &inputNum);

    for (int i = 2; i*i <= inputNum; i += 2){
        printf("%d\n", i * i);
    }

    return 0;
}
