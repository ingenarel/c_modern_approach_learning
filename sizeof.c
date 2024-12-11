#include <stdio.h>

int main(void){
    printf("int = %llu\n", sizeof(int));
    printf("double = %llu\n", sizeof(double));
    printf("char = %llu\n", sizeof(char));
    printf("long = %llu\n", sizeof(long));
    printf("long long = %llu\n", sizeof(long long));
    printf("unsigned = %llu\n", sizeof(unsigned));
    printf("long unsigned = %llu\n", sizeof(long unsigned));
    printf("long long unsigned = %llu\n", sizeof(long long unsigned));

    return 0;
}
