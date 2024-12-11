#include <stdio.h>

int main(void){
    goto d;

    a: printf(" this"); return 0;

    b: printf(" line"); goto a;

    c: printf(" is"); goto b;

    d: printf("reversed"); goto c;

}
