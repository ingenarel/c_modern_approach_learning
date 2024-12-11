#include <stdio.h>

int main(void){
    int a, b, c, d,
        e, f, g, h,
        i, j, k, l,
        m, n, o, p;

    printf("Enter numbers => ");
    scanf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d",
           &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p
    );

    printf("%2d %2d %2d %2d\n", a, b, c, d);
    printf("%2d %2d %2d %2d\n", e, f, g, h);
    printf("%2d %2d %2d %2d\n", i, j, k, l);
    printf("%2d %2d %2d %2d\n", m, n, o, p);

    printf("row sums: %d %d %d %d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p);
    printf("column sums: %d %d %d %d\n", a+e+i+m, b+f+j+n, c+g+k+o, d+h+l+p);
    printf("diagonal sums: %d %d\n", a+f+k+p, d+g+j+m);

    return 0;
}
