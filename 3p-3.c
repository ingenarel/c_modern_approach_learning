#include <stdio.h>

int main(void){
    int gs_prefix, group_identifier, publiser_code, item_number, check_digit;

    printf("Enter ISBN => ");
    scanf("%d-%d-%d-%d-%d", &gs_prefix, &group_identifier, &publiser_code, &item_number, &check_digit);
    printf("GS1 prefix: %d\n", gs_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publiser Code: %d\n", publiser_code);
    printf("Item Number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
