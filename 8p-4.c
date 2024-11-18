#include <stdio.h>
#define ARR_LEN(n) (int) (sizeof(n) / sizeof(n[0]))

int main(void){
    int a[10];
    
    printf("Enter %d numbers: ", ARR_LEN(a));
    for (int i = 0; i < ARR_LEN(a); i++)
        scanf("%d", &a[i]);

    printf("In reversed order: ");
    for (int i = ARR_LEN(a) - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}
