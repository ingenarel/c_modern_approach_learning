#include <stdio.h>

int main(void){
    int num;

    printf("Enter number of entries => ");
    scanf("%d", &num);

    for (short i = 1; i <= num; i++){
        printf("%5hd%12hd\n", i, i*i);
    }

    // 46340

    return 0;
}
