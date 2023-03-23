#include <stdio.h>

int main(void) {
    int a,b,t;
    int h,m;
    scanf("%d %d %d", &a, &b, &t);
    h = t/60;
    m = t%60;
    b += m;
    a += h;
    if(b >= 60) {
        b -= 60;
        a += 1;
    }
    if(a >= 24) {
        a -= 24;
    }
    printf("%d %d\n", a, b);

    return 0;
}