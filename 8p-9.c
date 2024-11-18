#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAP_X 10
#define MAP_Y 10

int main(void){
    bool possibleDirections[4] = {0};
    char map[MAP_Y][MAP_X], nextPos;
    int ActualPositionX, ActualPositionY;

    srand(time(NULL));

    for (int y = 0; y < MAP_Y; y++){
        for (int x = 0; x < MAP_X; x++)
            map[y][x] = '.';
    }

    ActualPositionY = rand() % MAP_Y; ActualPositionX = rand() % MAP_X;

    map[ActualPositionY][ActualPositionX] = 'A';
    
    for (int step = 'B'; step <= 'Z';){
        //  0
        //1   2 
        //  3
        if (ActualPositionY > 0 && map[ActualPositionY-1][ActualPositionX] == '.')
            possibleDirections[0] = 1;
        else
            possibleDirections[0] = 0;

        if (ActualPositionY < MAP_Y-1 && map[ActualPositionY+1][ActualPositionX] == '.')
            possibleDirections[3] = 1;
        else
            possibleDirections[3] = 0;

        if (ActualPositionX > 0 && map[ActualPositionY][ActualPositionX-1] == '.')
            possibleDirections[1] = 1;
        else
            possibleDirections[1] = 0;

        if (ActualPositionX < MAP_X-1 && map[ActualPositionY][ActualPositionX+1] == '.')
            possibleDirections[2] = 1;
        else
            possibleDirections[2] = 0;

        if (possibleDirections[0] == 0 && possibleDirections[1] == 0 &&
            possibleDirections[2] == 0 && possibleDirections[3] == 0
        )
            break;

        nextPos = rand() % 4;

        if (possibleDirections[nextPos] == 0)
            continue;

        switch(nextPos){
            case 0: ActualPositionY--; break;
            case 1: ActualPositionX--; break;
            case 2: ActualPositionX++; break;
            case 3: ActualPositionY++; break;
            default: break;
        } 

        map[ActualPositionY][ActualPositionX] = step;
        step++;
    }

    for (int y = 0; y < MAP_Y; y++){
        for (int x = 0; x < MAP_X; x++)
            printf("%c ", map[y][x]);
        putchar('\n');
    }

    return 0;
}
