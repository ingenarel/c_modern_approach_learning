#include <stdio.h>

int main(void){
    int money_20, money_10, money_5, money_1;
    money_20 = 0;
    money_10 = 0;
    money_5 = 0;
    money_1 = 0;

    int input_money;
    printf("Enter a dollar ammount: ");
    scanf("%d", &input_money);
    while (input_money >= 20) {
        input_money -= 20;
        money_20++;
    }
    while (input_money >= 10) {
        input_money -= 10;
        money_10++;
    }
    while (input_money >= 5) {
        input_money -= 5;
        money_5++;
    }
    while (input_money >= 1) {
        input_money -= 1;
        money_1++;
    }
    printf("$20 bills: %d\n", money_20);
    printf("$10 bills: %d\n", money_10);
    printf(" $5 bills: %d\n", money_5);
    printf(" $1 bills: %d\n", money_1);

    return 0;
}
