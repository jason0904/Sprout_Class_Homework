#include <stdio.h>

int arr[10001];
int n,x;

int main(void) {
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] < x) {
            printf("%d ", arr[i]);
        }
    }
}