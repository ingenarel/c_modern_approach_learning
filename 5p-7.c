#include <stdio.h>

int main(void){
    int a, b, c, d,
        smallest, largest;

    printf("Enter four ints => ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // if (a>b && a>c && a>d){ // {{{
    //     largest = a;
    // }else if (b>a && b>c && b>d){
    //     largest = b;
    // }else if (c>a && c>b && c>d){
    //     largest = c;
    // }else{
    //     largest = d;
    // }
    //
    // if (a<b && a<c && a<d){
    //     smallest = a;
    // }else if (b<a && b<c && b<d){
    //     smallest = b;
    // }else if (c<a && c<b && c<d){
    //     smallest = c;
    // }else{
    //     smallest = d;
    // } // }}}

    largest = (a>b && a>c && a>d) ? a : (b>a && b>c && b>d) ? b : (c>a && c>b && c>d) ? c : d;
    smallest = (a<b && a<c && a<d) ? a : (b<a && b<c && b<d) ? b : (c<a && c<b && c<d) ? c : d;

    printf("largest %d\n", largest);
    printf("smallest %d\n", smallest);

    return 0;
}
