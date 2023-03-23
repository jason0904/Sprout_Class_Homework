#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        t = a; a = b; b = t;
    }
    if (b > c) {
        t = b; b = c; c = t;
    }
    if (a > b) {
        t = a; a = b; b = t;
    }

    printf("%d %d %d\n", a, b, c);
    return 0;
}
//2480번 max구할때와 10093번 swap의 짬뽕