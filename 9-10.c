#include <stdio.h>

#define ARRAY_LEN 6

int largestElement(int arr[], int arrLen){
    int largestNum = -2147483648;
    for (int i = 0; i < arrLen; i++){
        if (largestNum < arr[i])
            largestNum = arr[i];
    }
    return largestNum;
}

long long averageElement(int arr[], int arrLen){
    int i;
    long long sum = 0;
    for (i = 0; i < arrLen; i++){
        sum += arr[i];
    }
    return sum / i;
}

int numOfPositiveElements(int arr[], int arrLen){
    int posElements = 0;
    for (int i = 0; i < arrLen; i++){
        if (arr[i] > -1)
            posElements++;
    }
    return posElements;
}

int main(void){
    int array[ARRAY_LEN] = {12, 123, 148284, 929, 69, -420};
    // 24972

    printf("largestNum = %d\n", largestElement(array, ARRAY_LEN));
    printf("average = %lld\n", averageElement(array, ARRAY_LEN));
    printf("posElements = %d\n", numOfPositiveElements(array, ARRAY_LEN));

    return 0;
}
