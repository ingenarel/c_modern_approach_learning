#include <stdio.h>

int main(void){
    int a;

    printf("Enter numerical grade => ");
    scanf("%d", &a);

    if (a < 0 || a > 100){
        printf("%d is not a valid grade", a);
        return 1;
    }

    switch(a / 10){
        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("F\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 9: case 10:
            printf("A\n");
            break;
        default:
            break;
    }

    return 0;
}
