#include <stdio.h>

double median(double x, double y, double z){
    return
        x <= y ?
            y <= z ?
                y
            :x <= z ?
                z
            :x
        :z <= y ?
            y
        :x <= z ?
            x
        :z
    ;
}

int main(void){
    printf("%f", median(3, 2, 1));

    return 0;
}
