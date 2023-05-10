#include <stdio.h>

int main() {

    int n, m, a, b;
    int arr[100];
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; i++)
        arr[i] = i;

    while(m--) {
        scanf("%d %d", &a, &b);

        for(int i = 0; i <= (b - a) / 2; i++) {
            int tmp;
            tmp = arr[a + i];
            arr[a + i] = arr[b - i];
            arr[b - i] = tmp;
        }
    }

    for(int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}