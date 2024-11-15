#include <stdio.h>

int main(void){
    int n, m = 256;

    for (n = 0; m > 0; n++ , (m /= 2)){}

    printf("n = %d\nm= %d\n", n, m);

    return 0;
}
