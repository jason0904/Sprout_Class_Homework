#include <stdio.h>

int main(void) {
    int A,B,V;
    int day;
    int hei;
    int result;
    scanf("%d %d %d", &A, &B, &V);
    hei = V - B;
    day = A - B;
    result = (hei - 1)/day + 1;
    printf("%d",result);

    return 0;
}