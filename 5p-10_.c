#include <stdio.h>

int main(void){
    int numGrade;

    printf("Enter numerical grade => ");
    scanf("%d", &numGrade);

    if (numGrade < 0 || numGrade > 100){
        printf("%d IS NOT A VALID GRADE\n", numGrade);
        return 1;
    }

    printf(
        "Letter Grade: %c",
        (numGrade <= 59) ? 'F' : (numGrade <= 69) ? 'D' : (numGrade <= 79) ? 'C' : (numGrade <= 89) ? 'B' : 'A'
    );

    return 0;
}
