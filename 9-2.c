#include <stdio.h>
#include <stdbool.h>

bool check(int x, int y, int n){
    return (x > 0 && x < n - 1 && y > 0 && y < n - 1) ? 1 : 0;
}

int main(void){
    printf("%hhd", check(1, 2, 3));

    return 0;
}
