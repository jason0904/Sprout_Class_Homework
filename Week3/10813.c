#include <stdio.h>

int n,m;
int arr[101];

int main(void) {
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        arr[i] = i;
    }
    for(int tmp = 0; tmp < m; tmp++) {
        int i,j,temp;
        scanf("%d %d", &i, &j);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i = 1; i <= n; i++) printf("%d ", arr[i]);
}
