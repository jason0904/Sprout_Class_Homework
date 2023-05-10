#include <stdio.h>

int main(void) {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int min = x;
    if(w-x < min) {
        min = w-x;
    }
    if(h-y < min) {
        min = h-y;
    }
    if(y < min) {
        min = y;
    }
    printf("%d", min);
    return 0;
}