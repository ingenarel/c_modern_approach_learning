#include <stdio.h>

int main(void){
    unsigned char magicSquareSize;

    printf("Enter the size of the square (odd number between 3 & 99) => "); scanf("%hhd", &magicSquareSize);

    if ((magicSquareSize < 3 || magicSquareSize > 99) || (magicSquareSize > 3 && magicSquareSize % 2 == 0)){
        printf("not a valid size given");
        return 1;
    }

    unsigned short magicSquare[magicSquareSize][magicSquareSize];

    for (unsigned char y = 0; y < magicSquareSize; y++){
        for (unsigned char x = 0; x < magicSquareSize; x++)
            magicSquare[y][x] = 0;
    }

    signed char curY = magicSquareSize,
                curX = magicSquareSize / 2,
                nextY = curY,
                nextX = curX;

    magicSquare[0][curX] = 1;

    for (unsigned short i = 2; i <= magicSquareSize * magicSquareSize; i++){
        nextY--; nextX++;

        if (nextY < 0)
            nextY = magicSquareSize-1;
        else if (nextY >= magicSquareSize)
            nextY = 0;

        if (nextX < 0)
            nextX = magicSquareSize-1;
        else if (nextX >= magicSquareSize)
            nextX = 0;
    
        if (magicSquare[nextY][nextX] == 0)
            magicSquare[curY = nextY][curX = nextX] = i;
        else
            magicSquare[nextY = curY+1][nextX = curX] = i;
    }

    for (unsigned char y = 0; y < magicSquareSize; y++){
        for (unsigned char x = 0; x < magicSquareSize; x++)
            printf("%4d ", magicSquare[y][x]);
        putchar('\n');
    }

    printf("\nRow sums: ");
    for (unsigned short y = 0; y < magicSquareSize; y++){
        unsigned int sum = 0;
        for (unsigned short x = 0; x < magicSquareSize; x++)
            sum += magicSquare[y][x];
        printf("%u ", sum);
    }
    putchar('\n');

    printf("Column sums: ");
    for (unsigned short y = 0; y < magicSquareSize; y++){
        unsigned int sum = 0;
        for (unsigned short x = 0; x < magicSquareSize; x++)
            sum += magicSquare[x][y];
        printf("%u ", sum);
    }
    putchar('\n');

    printf("diagnonal sums: ");
    unsigned int sum = 0;
    for (unsigned char y = 0; y < magicSquareSize; y++)
        sum += magicSquare[y][y];
    printf("%u ", sum);
    sum = 0;
    for (signed char y = magicSquareSize - 1; y >= 0; y--)
        sum += magicSquare[y][y];
    printf("%u", sum);
    

    return 0;
}
