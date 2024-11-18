#include <stdio.h>

#define GRADE_MATRIX_Y 5
#define GRADE_MATRIX_X 5

int main(void){
    float gradeMatrix[GRADE_MATRIX_Y][GRADE_MATRIX_X], tmpSum;

    printf("Enter %d grades for\n", GRADE_MATRIX_X);

    for (int y = 0; y < GRADE_MATRIX_Y; y++){
        printf("Student %d => ", y+1);
        for (int x = 0; x < GRADE_MATRIX_X; x++)
            scanf("%f", &gradeMatrix[y][x]);
    }



    printf("\nAverage grade of students:\n");
    for (int i = 0; i < GRADE_MATRIX_Y; i++)
        printf("Student %d\t", i+1);
    printf("\n");

    for (int y = 0; y < GRADE_MATRIX_Y; y++){
        tmpSum = 0;
        for (int x = 0; x < GRADE_MATRIX_X; x++)
            tmpSum += gradeMatrix[y][x];
        printf("%9.1f\t", tmpSum / GRADE_MATRIX_X);
    }
    printf("\n");



    printf("\nAverage grade for each quiz:\n");
    for (int i = 0; i < GRADE_MATRIX_X; i++)
        printf("Quiz %d\t\t", i+1);
    printf("\n");

    for (int y = 0; y < GRADE_MATRIX_Y; y++){
        tmpSum = 0;
        for (int x = 0; x < GRADE_MATRIX_X; x++)
            tmpSum += gradeMatrix[x][y];
        printf("%6.1f\t\t", tmpSum / GRADE_MATRIX_Y);
    }
    printf("\n");


    return 0;
}
