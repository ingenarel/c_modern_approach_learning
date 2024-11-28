#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAP_X 10
#define MAP_Y 10

void generate_random_walk(char walk[10][10]){
    srand(time(NULL));

    for (int y = 0; y < MAP_Y; y++){
        for (int x = 0; x < MAP_X; x++)
            walk[y][x] = '.';
    }

    bool possibleDirections[4] = {0};
    int ActualPositionY = rand() % MAP_Y,
        ActualPositionX = rand() % MAP_X;
    walk[ActualPositionY][ActualPositionX] = 'A';
    for (int step = 'B'; step <= 'Z';){
        //  0
        //1   2 
        //  3
        if (ActualPositionY > 0 && walk[ActualPositionY-1][ActualPositionX] == '.')
            possibleDirections[0] = 1;
        else
            possibleDirections[0] = 0;

        if (ActualPositionY < MAP_Y-1 && walk[ActualPositionY+1][ActualPositionX] == '.')
            possibleDirections[3] = 1;
        else
            possibleDirections[3] = 0;

        if (ActualPositionX > 0 && walk[ActualPositionY][ActualPositionX-1] == '.')
            possibleDirections[1] = 1;
        else
            possibleDirections[1] = 0;

        if (ActualPositionX < MAP_X-1 && walk[ActualPositionY][ActualPositionX+1] == '.')
            possibleDirections[2] = 1;
        else
            possibleDirections[2] = 0;

        if (possibleDirections[0] == 0 && possibleDirections[1] == 0 &&
            possibleDirections[2] == 0 && possibleDirections[3] == 0
        )
            break;

        unsigned char nextPos = rand() % 4;

        if (possibleDirections[nextPos] == 0)
            continue;

        switch(nextPos){
            case 0: ActualPositionY--; break;
            case 1: ActualPositionX--; break;
            case 2: ActualPositionX++; break;
            case 3: ActualPositionY++; break;
            default: break;
        } 

        walk[ActualPositionY][ActualPositionX] = step;
        step++;
    }
}

void print_array(char walk[10][10]){
    for (unsigned char y = 0; y < 10; y++){
        for (unsigned char x = 0; x < 10; x++)
            printf("%c ", walk[y][x]);
        putchar('\n');
    }
}

int main(void){
    char map[MAP_Y][MAP_X];

    generate_random_walk(map);
    print_array(map);

    return 0;
}
