#include <stdio.h>

// 3 ^ 8
// (3 ^ (8 / 2)) x (3 ^ (8 / 2))
// (3 ^ 4) x (3 ^ 4)
// (3 ^ (4 / 2) x (3 ^ 4 / 2)) x (3 ^ (4 / 2) x (3 ^ 4 / 2))
// ((3 ^ 2) x (3 ^ 2)) x ((3 ^ 2) x (3 ^ 2))
// ((3 x 3) x (3 x 3)) x ((3 x 3) x (3 x 3))

// 3 ^ 5
// 3 x (3 ^ 4)
// 3 x ((3 ^ (4 / 2)) x (3 ^ (4 / 2)))
// 3 x ((3 ^ 2) x (3 ^ 2))
// 3 x (((3 x 3) x (3 x 3)) x ((3 x 3) x (3 x 3)))
double power(float x, int y){
    return
        (y == 2) ?
            x * x
        :(y % 2 == 0) ?
            power(x, y / 2) * power(x, y/2)
        :power(x, y-1) * x
    ;
}

int main(void){
    printf("%g", power(3, 10));

    return 0;
}
