#include <stdio.h>
#define ARR_LEN(n) (int) (sizeof(n) / sizeof(n[0]))

int main(void){
    int identityMatrix[10][10];

    for (int x = 0; x < ARR_LEN(identityMatrix); x++){
        for (int y = 0; y < ARR_LEN(identityMatrix); y++){
            if (x == y)
                identityMatrix[x][y] = 1;
            else
                identityMatrix[x][y] = 0;
        }
    }

    for (int x = 0; x < ARR_LEN(identityMatrix); x++){
        for (int y = 0; y < ARR_LEN(identityMatrix); y++)
            printf("%d ", identityMatrix[x][y]);
        printf("\n");
    }

    return 0;
}
