#include <stdio.h>

int main(void){
    int x, x_down, a, a_down, result, result_down;
    printf("fraction 1 => ");
    scanf("%d / %d", &x, &x_down);
    printf("fraction 2 => ");
    scanf("%d / %d", &a, &a_down);

    result = x * a_down + a * x_down;
    result_down = a_down * x_down;

    if (result == result_down) {
        printf("result: 1\n");
        return 0;
    }


    if (result > 1 && result_down > 1) {
        int big_num;
        if (result > result_down) {
            big_num = result;
        } else {
            big_num = result_down;
        }
        for (int i = 1; i <= big_num; i++) {
            if ((result % i) == 0 && (result_down % i) == 0) {
                result /= i;
                result_down /= i;
            }
        }
    }

    printf("result: %d/%d\n", result, result_down);

    return 0;
}
