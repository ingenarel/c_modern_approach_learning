#include <stdio.h>

int main(void){
    int a[10], b[10], i = 0;

    for (; i < 10; i++){
        a[i] = i+58;
    }
    for (int x = 0; x < 10;){
        b[x] = a[x++];
    }

    for (int c = 0; c < 10; c++){
        printf("a[%d] = %d\t", c, a[c]);
        printf("b[%d] = %d\n", c, b[c]);
    }

    return 0;
}
