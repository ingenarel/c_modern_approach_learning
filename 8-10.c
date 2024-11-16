#include <ctype.h>
#include <stdio.h>

int main(void){
    char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};

    for (int i = 0; i < 8; i++){
        chess_board[1][i] = 'p';
        if (!(i % 2)){
            chess_board[2][i] = ' ';
            chess_board[3][i] = '.';
        }else{
            chess_board[2][i] = '.';
            chess_board[3][i] = ' ';
        }
        chess_board[4][i] = chess_board[2][i];
        chess_board[5][i] = chess_board[3][i];
        chess_board[6][i] = 'P';
        chess_board[7][i] = toupper(chess_board[0][i]);
    }

    for (int i = 0; i < 8; i++){
        for (int a = 0; a < 8; a++)
            printf("%c ", chess_board[i][a]);
        printf("\n");
    }

    return 0;
}
