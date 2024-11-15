#include <stdio.h>

int main(void){
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("(a) %d\n", c * i); // -3 int
    printf("(b) %ld\n", s + m); // 7 long
    printf("(c) %f\n", f / c); // 6.5 float;
    printf("(d) %f\n", d / s); // 3.75 double
    printf("(e) %f\n", f - d); // -1.0 double
    printf("(f) %d\n", (int) f); // 6 int

    return 0;
}
