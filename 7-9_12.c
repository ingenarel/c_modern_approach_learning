#include <stdio.h>

int main(void){
    // i have clangd installed and i'm giving wrong format specifiers so that clangd says what is the expression
    // returning

    // there might be a chance that my assumtions and writings are wrong.

    // 9
    // int i = 1, j = 1;
    // printf("%f", i / j + 'a');
    // // int / int + char
    // // int / int + int

    // 10
    // int i = 1; long j = 1; unsigned k = 1;
    // printf("%f", i + (int) j * k);
    // // int + (int)long * unsigned
    // // int + int * unsigned
    // // int + unsigned * unsigned
    // // unsigned + unsigned

    // 11
    int i = 1; float f = 1; double d = 1;
    printf("%d", i * f / d);
    // int * float / double
    // int * double / double
    // int * double
    // double * double

    // // 12
    // int i = 1; float f = 1; double d;
    // d = i + f;
    // // double = int + float;
    // // double = float + float;
    // // double = float;
    // // double = double;

    return 0;
}
