#include <stdio.h>

int main(void) {
    int A, B;
    int a, b;
    int max = 0;
    scanf("%d %d", &A, &B);
    a= (A%10*100) + (A/10%10*10) + (A/100);
    b= (B%10*100) + (B/10%10*10) + (B/100);

    if(a>b) {
        max = a;
    }
    else {
        max = b;
    }
    printf("%d", max);
    return 0;
}