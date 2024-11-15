#include <stdio.h>

int main(void){
    int xUp, xDown, yUp, yDown, resultUp, resultDown;
    char operator;

    printf("fractions (x/a (+|-|*|/) y/b) => ");
    scanf("%d/%d %c %d/%d", &xUp, &xDown, &operator, &yUp, &yDown);

    switch(operator){
        case '+':
            resultUp = xUp * yDown + yUp * xDown;
            resultDown = yDown * xDown;
            break;
        case '-':
            resultUp = xUp * yDown - yUp * xDown;
            resultDown = yDown * xDown;
            break;
        case '*':
            resultUp = xUp * yUp;
            resultDown = yDown * xDown;
            break;
        case '/':
            resultUp = xUp * yDown;
            resultDown = xDown * yUp;
            break;
        default:
            printf("NOT A VALID OPERATOR GIVEN!!!");
            return 1;
            break;
    }

    if (resultUp == resultDown) {
        printf("result: 1\n");
        return 0;
    }

    // if (resultUp == 0) {
    //     printf("result: 0\n");
    //     return 0;
    // }

    if (resultUp > 1 && resultDown > 1) {
        int big_num;
        if (resultUp > resultDown) {
            big_num = resultUp;
        } else {
            big_num = resultDown;
        }
        for (int i = 1; i <= big_num; i++) {
            if ((resultUp % i) == 0 && (resultDown % i) == 0) {
                resultUp /= i;
                resultDown /= i;
            }
        }
    }

    // printf("result: %d/%d\n", resultUp, resultDown);

    // my extra additions

    #define ADJUST_NOM_AND_DENOM                                               \
        if(whole > 0){                                                         \
            for(int i = whole; i > 0; i /= 10)                                 \
                printf(" ");                                                   \
            printf(" ");                                                       \
        }

    int whole = 0;

    if (resultUp > resultDown){
        whole = resultUp / resultDown;
        resultUp = resultUp % resultDown;
    }

    if (resultUp == 0 && whole == 0){
        printf("result: 0\n");
        return 0;
    }else if (resultUp == 0 && whole != 0){
        printf("result: %d\n", whole);
        return 0;
    }

    printf("        ");
    ADJUST_NOM_AND_DENOM
    printf("%d\n", resultUp);

    printf("result: ");
    if (whole > 0)
        printf("%d ", whole);
    for (int i = resultDown; i > 0; i /= 10)
        printf("-");
    printf("\n");

    printf("        ");
    ADJUST_NOM_AND_DENOM
    printf("%d\n", resultDown);

    return 0;
}
