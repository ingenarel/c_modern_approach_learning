#include <stdio.h>

int main(void){
    int num;

    printf("Enter number of entries => ");
    scanf_s("%d", &num);

    // this is needed to read the newline char that scanf left behinds.
    getchar();
    
    for (int i = 1; i <= num; i++){
        printf("\n%10d%10d", i, i*i);
        if (i % 24 == 0 && num != 24){
            printf("\nPress Enter to continue...");
            getchar();
        }
    }

    return 0;
}
