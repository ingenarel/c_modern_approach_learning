#include <stdio.h>
#include <stdbool.h>

#define INPUT_NUM_LEN 10

int split(int arr[], int low, int high){// {{{
    int partElement = arr[low];
    for(;;){
        while(low < high && partElement <= arr[high])
            high--;
        if (low >= high)
            break;
        // // debug{{{
        //     for (unsigned char i = 0; i < INPUT_NUM_LEN; i++)
        //         printf("%d ", arr[i]);
        //     putchar('\n');// }}}
        arr[low++] = arr[high];
        // // debug{{{
        //     for (unsigned char i = 0; i < INPUT_NUM_LEN; i++)
        //         printf("%d ", arr[i]);
        //     putchar('\n'); // }}}
        while(low < high && arr[low] <= partElement)
            low++;
        if (low >= high)
            break;
        // // debug{{{
        //     for (unsigned char i = 0; i < INPUT_NUM_LEN; i++)
        //         printf("%d ", arr[i]);
        //     putchar('\n'); // }}}
        arr[high--] = arr[low];
        // // debug{{{
        //     for (unsigned char i = 0; i < INPUT_NUM_LEN; i++)
        //         printf("%d ", arr[i]);
        //     putchar('\n'); // }}}
    }
    arr[high] = partElement;
    return high;
}// }}}

void quicksort(int arr[], int low, int high){// {{{
    if(low >= high)
        return;
    int middle = split(arr, low, high);
    quicksort(arr, low, middle - 1);
    quicksort(arr, middle + 1, high);
}// }}}

int main(void){// {{{
    int inputNums[INPUT_NUM_LEN];

    // getting input and storing it in the array;{{{
    printf("Enter 10 numbers => ");
    for (unsigned char i = 0; i < INPUT_NUM_LEN; i++)
        scanf("%d", &inputNums[i]);// }}}

    quicksort(inputNums, 0, INPUT_NUM_LEN-1);

    // printing out sorted? array;{{{
    printf("In sorted order: ");
    for (unsigned char i = 0; i < INPUT_NUM_LEN; i++)
        printf("%d ", inputNums[i]);// }}}

    return 0;
}// }}}
