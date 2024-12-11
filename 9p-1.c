#include <stdio.h>
#include <limits.h>

#define INPUT_NUMS_LEN 5

void selection_sort(int array[], int arrayLength){
    int maxInt = INT_MIN;
    int maxIntPos = 0;
    for (int i = 0; i < arrayLength; i++){
        if(maxInt < array[i]){
            maxInt = array[i];
            maxIntPos = i;
        }
    }
    array[maxIntPos] = array[arrayLength - 1];
    array[arrayLength - 1] = maxInt;
    if (arrayLength > 2)
        selection_sort(array, arrayLength - 1);
}

int main(void){
    printf("Enter 5 ints to sort => ");
    
    int inputNums[INPUT_NUMS_LEN];
    for (int i = 0; i < INPUT_NUMS_LEN; i++)
        scanf("%d", &inputNums[i]);
    
    selection_sort(inputNums, INPUT_NUMS_LEN);

    for (int i = 0; i < INPUT_NUMS_LEN-1; i++)
        printf("%d, ", inputNums[i]);
    printf("%d", inputNums[INPUT_NUMS_LEN-1]);

    return 0;
}
