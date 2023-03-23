#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c) {
        printf("%d\n", 10000 + a * 1000);
    }
    else if(a == b) {
        printf("%d\n", 1000 + a * 100);
    }
    else if(a == c) {
        printf("%d\n", 1000 + a * 100);
    }
    else if(b == c) {
        printf("%d\n", 1000 + b * 100);
    }
    else {
        int max = 0;
        if(a > max) max = a;
        if(b > max) max = b;
        if(c > max) max = c;
        //max(a,max(b,c))의 C version. 3번검사해서 max값을 가장큰값으로 바꾼다.
        printf("%d\n", max * 100);
    }
    return 0;
}