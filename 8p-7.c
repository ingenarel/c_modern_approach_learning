#include <stdio.h>

#define MATRIX_XY 5

int main(void){
    int matrix[5][5], tmpSum;

    for (int y = 0; y < MATRIX_XY; y++){
        printf("Enter row %d (%d ints) => ", y+1, MATRIX_XY);
        for (int x = 0; x < MATRIX_XY; x++)
            scanf("%d", &matrix[y][x]);
    }

    printf("\nRow totals:");
    for (int y = 0; y < MATRIX_XY; y++){
        tmpSum = 0;
        for (int x = 0; x < MATRIX_XY; x++)
            tmpSum += matrix[y][x];
        printf(" %d", tmpSum);
    }
    printf("\n");

    printf("Column totals:");
    for (int y = 0; y < MATRIX_XY; y++){
        tmpSum = 0;
        for (int x = 0; x < MATRIX_XY; x++)
            tmpSum += matrix[x][y];
        printf(" %d", tmpSum);
    }
    printf("\n");

    return 0;
}
