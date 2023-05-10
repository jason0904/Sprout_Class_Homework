#include <stdio.h>

int arr[10][10];

int main(void) {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}