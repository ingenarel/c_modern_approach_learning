#include <stdio.h>
#include <ctype.h>

#define ARR_LEN(n) (int) (sizeof(n) / sizeof(n[0]))

float compute_GPA(char grades[], int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        switch(toupper(grades[i])){
            case 'A':
                sum += 4;
                break;
            case 'B':
                sum += 3;
                break;
            case 'C':
                sum += 2;
                break;
            case 'D':
                sum++;
                break;
            default:
                break;
        }
    }
    return sum / n;
}

int main(void){
    char gpa[] = {'f', 'F', 'f', 'f', 'A'};
    printf("%g", compute_GPA(gpa, ARR_LEN(gpa)));
    return 0;
}
