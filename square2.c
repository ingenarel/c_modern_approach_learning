#include <stdio.h>

int main(void){
    int num;

    printf("Enter number of entries => ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        printf("%10d%10d\n", i, i*i);
    }

    return 0;
}
