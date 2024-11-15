#include <stdio.h>
#include <stdbool.h>
#define NUMBER currentChar - 48

int main(void){
    float ans, currentNum;
    char previousOperator;

    printf("Enter an expression => ");
    scanf("%f", &ans);

    for(;;){
        if ((previousOperator = getchar()) == '\n')
            break;
        scanf("%f", &currentNum);
        switch(previousOperator){
            case '+':
                ans += currentNum; break;
            case '-':
                ans -= currentNum; break;
            case '*':
                ans *= currentNum; break;
            case '/':
                ans /= currentNum; break;
            default:
                printf("not a valid operator given!");
                return 1;
        }
    }
    printf("%.1f", ans);

    return 0;
}
