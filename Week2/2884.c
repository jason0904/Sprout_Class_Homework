#include <stdio.h>

int main(void) {
    int a,b,c;

    scanf("%d %d", &a, &b);

    c = b-45;

    if(c<0) {

        c = 60 + c;
        a = a - 1;
    }

    if(a<0) {

        a = 24 + a;

    }

    printf ("%d %d", a, c);

    return 0;
}