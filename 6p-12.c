#include <stdio.h>

// idk what the fuck ! means in math.
int main(void){
    float e = 1, x;
    int n;

    printf("e = 1 + 1/1 + 1/2 + ... + 1/n\n");

    printf("Enter value of n => ");
    scanf("%d", &n);

    printf("Enter value of x => ");
    scanf("%f", &x);

    for (int i = 1; i <= n && e < x; i++){
        e += 1.0/i;
    }

    printf("e = %f\n", e);

    return 0;
}
