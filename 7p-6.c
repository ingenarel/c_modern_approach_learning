#include <stdio.h>

int main(void){
    printf("sizeof(int) = %zu\nsizeof(short) = %zu\nsizeof(long) = %zu\nsizeof(double) = %zu\n",
            sizeof(int),        sizeof(short),        sizeof(long),        sizeof(double)
          );
    printf("sizeof(long double) = %zu\n", sizeof(long double));

    return 0;
}
