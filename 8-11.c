#include <stdio.h>

int main(void){
    char checker_board[8][8];
    
    for (int y = 0; y < 7; y+= 2){
        for (int x = 0; x < 8; x++){
            if (!(x % 2)){
                checker_board[y][x] = 'B';
                checker_board[y+1][x] = 'R';
            }else{
                checker_board[y][x] = 'R';
                checker_board[y+1][x] = 'B';
            }
        }
    }

    for (int y = 0; y < 8; y++){
        for (int x = 0; x < 8; x++)
            printf("%c ", checker_board[y][x]);
        printf("\n");
    }

    return 0;
}
