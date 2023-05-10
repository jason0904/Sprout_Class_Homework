#include <stdio.h>

int main(void) {
    int arr[9] = {};
    int a = 0; //값
    int b; //순서
    for(int i = 0; i<9; i++) {
        scanf("%d\n", &arr[i]);
    }
    for(int i = 0; i<9; i++) {
        if(arr[i] > a) {
            a = arr[i];
            b = i+1;
        }
    }
    printf("%d\n", a);
    printf("%d", b);
    return 0;
}