#include <stdio.h>

int evaluate_position(const char board[static 8][8]){
    int score = 0;
    for (int y = 0; y < 8; y++){
        for (int x = 0; x < 8; x++){
            switch(board[y][x]){
                case 'Q':
                    score += 9;
                    break;
                case 'R':
                    score += 5;
                    break;
                case 'B': case 'N':
                    score += 3;
                    break;
                case 'P':
                    score++;
                    break;
                case 'q':
                    score -= 9;
                    break;
                case 'r':
                    score -= 5;
                    break;
                case 'b': case 'n':
                    score -= 3;
                    break;
                case 'p':
                    score--;
                    break;
                default:
                    break;
            }
        }
    }
    return score;
}
 
int main(void){
    char chessboard[8][8] = {
        {'K', 'Q', 'R', 'B', 'N', 'P'},
        {'k', 'q', 'r', 'b', 'n', 'p', 'p'}
    };
    printf("%d", evaluate_position(chessboard));

    return 0;
}
