#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        a += (tmp/30+1) * 10;
        b += (tmp/60+1) * 15;
    }
    if(a > b) {
        printf("M %d\n", b);
    }
    else if(a < b) {
        printf("Y %d\n", a);
    }
    else {
        printf("Y M %d\n", a);
    }

    return 0;
}