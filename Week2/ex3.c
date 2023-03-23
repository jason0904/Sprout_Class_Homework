#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if(n%6 == 0) {
        printf("%d", 6);
    }
    else if(n%2 == 0) {
        printf("%d", 2);
    }
    else if(n%3 == 0) {
        printf("%d", 3);
    }
}