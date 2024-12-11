#include <stdio.h>

int main(void){
    int inputNum;

    printf("Enter a two-digit number => ");
    scanf("%d", &inputNum);

    printf("You entered the number ");

    switch(inputNum){
        case 10:
            printf("ten");
            return 0;
        case 11:
            printf("eleven");
            return 0;
        case 12:
            printf("twelve");
            return 0;
        case 13:
            printf("thirteen");
            return 0;
        case 14:
            printf("fourteen");
            return 0;
        case 15:
            printf("fifteen");
            return 0;
        case 16:
            printf("sixteen");
            return 0;
        case 17:
            printf("seventeen");
            return 0;
        case 18:
            printf("eighteen");
            return 0;
        case 19:
            printf("nineteen");
            return 0;
        default:
            break;
    }

    switch(inputNum/10){
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("fourty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
        default:
            break;
    }

    switch(inputNum%10){
        case 1:
            printf("-one\n");
            break;
        case 2:
            printf("-two\n");
            break;
        case 3:
            printf("-three\n");
            break;
        case 4:
            printf("-four\n");
            break;
        case 5:
            printf("-five\n");
            break;
        case 6:
            printf("-six\n");
            break;
        case 7:
            printf("-seven\n");
            break;
        case 8:
            printf("-eight\n");
            break;
        case 9:
            printf("-nine\n");
            break;
        default:
            break;
    }

    return 0;
}
