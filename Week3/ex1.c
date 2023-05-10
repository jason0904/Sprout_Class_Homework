#include <stdio.h>

int arr[10];

int main(void) {
    for(int i = 0; i < 10; i++) {
        scanf(" %d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
}