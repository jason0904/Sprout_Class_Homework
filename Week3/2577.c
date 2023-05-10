#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    int d = a*b*c;
    int e;
    int arr[10] = {};
    while(d>0) {
        e = d%10;
        ++arr[e];
        d /= 10;
    }

    for(int i = 0; i<10; i++) {

        printf("%d\n", arr[i]);
    }

    return 0;
}