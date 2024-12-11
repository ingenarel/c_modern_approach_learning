//   0 
// 5   1
//   6
// 4   2
//   3

#include <stdio.h>

#define ARR_LEN(n) (int) (sizeof(n) / sizeof(n[0]))

int main(void){
    const int segments[10][7] = {
        {1, 1, 1, 1, 1, 1},     // 0
        {0, 1, 1},              // 1
        {1, 1, 0, 1, 1, 0, 1},  // 2
        {1, 1, 1, 1, 0, 0, 1},  // 3
        {0, 1, 1, 0, 0, 1, 1},  // 4
        {1, 0, 1, 1, 0, 1, 1},  // 5
        {1, 0, 1, 1, 1, 1, 1},  // 6
        {1, 1, 1},              // 7
        {1, 1, 1, 1, 1, 1, 1},  // 8
        {1, 1, 1, 0, 0, 1, 1}   // 9
    };

    for (int i = 0; i < ARR_LEN(segments); i++){
        if (segments[i][0])
            printf(" --- \n");
        else
            printf("     \n");

        if (segments[i][5])
            printf("|   ");
        else
            printf("    ");

        if (segments[i][1])
            printf("|\n");
        else
            printf(" \n");

        if (segments[i][6])
            printf(" --- \n");
        else
            printf("     \n");

        if (segments[i][4])
            printf("|   ");
        else
            printf("    ");

        if (segments[i][2])
            printf("|\n");
        else
            printf(" \n");

        if (segments[i][3])
            printf(" --- \n");
        else
            printf("     \n");

        printf("\n------------\n\n");
    }

    return 0;
}
