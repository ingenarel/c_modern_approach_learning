#include <stdio.h>

int main(void){
    int score = 0;
    
    if (score >= 90)
        printf("A\t");
    else if (score >= 80)
        printf("B\t");
    else if (score >= 70)
        printf("C\t");
    else if (score >= 60)
        printf("D\t");
    else
        printf("F\t");

    if (score < 60)
        printf("F\n");
    else if (score < 70)
        printf("D\n");
    else if (score < 80)
        printf("C\n");
    else if (score < 90)
        printf("B\n");
    else
        printf("A\n");

    return 0;
}
