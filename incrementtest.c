#include <stdio.h>

int main(void){
    int i = 1;
    printf("%d\n", i);
    printf("%d\n", i++);
    printf("%d\n", i);
    printf("%d\n", ++i);
    printf("%d\n", i);

    return 0;
}

// 1
// 1
// 2
// 3
// 3
