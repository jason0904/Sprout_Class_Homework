#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("Hello");
            break;
        case 2:
            printf("World!");
            break;
        default:
            printf("Thanks");
            break;
    }
}