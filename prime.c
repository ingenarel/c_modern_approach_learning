#include <stdio.h>
#include <stdbool.h>

bool isPrime(long long n){
    if (n <= 1)
        return 0;
    for (long long i = 2; i*i <= n; i++){
        if (n % i == 0){
            printf("dividable by %lld\n", i);
            return 0;
        }
    }
    return 1;
}

int main(void){
    long long inputNum;
    printf("Enter a number (int) => "); scanf("%lld", &inputNum);

    if (isPrime(inputNum))
        printf("prime\n");
    else
        printf("not prime\n");

    return 0;
}
