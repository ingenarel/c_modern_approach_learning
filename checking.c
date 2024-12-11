#include <stdio.h>

int main(void){
    int command;
    float balence = 0, credit, debit = 0;
    
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balence, 4=exit\n");

    for(;;){
        printf("Enter command => ");
        scanf("%1d", &command);

        switch(command){
            case 0:
                balence = 0;
                break;
            case 1:
                printf("Enter ammount of credit => ");
                scanf("%f", &credit);
                balence += credit;
                break;
            case 2:
                printf("Enter ammount of debit => ");
                scanf("%f", &debit);
                balence -= debit;
                break;
            case 3:
                printf("Current balence = %.2f\n", balence);
                break;
            case 4:
                return 0;
            default:
                printf("UNKNOWN COMMAND!!!\n");
                printf("Commands: 0=clear, 1=credit, 2=debit, 3=balence, 4=exit\n");
                break;
        }
    }

    return 0;
}
