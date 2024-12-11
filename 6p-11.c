#include <stdio.h>

// idk what the fuck ! means in math.
int main(void){
    float e = 1;
    int n;

    printf("e = 1 + 1/1 + 1/2 + ... + 1/n\n");

    printf("Enter value of n => ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        e += 1.0/i;
    }
    printf("e = %f\n", e);

    return 0;
}
