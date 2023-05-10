#include <stdio.h>

int n,m;
int arr[101] = {0, };

int main(void) {
    scanf("%d %d", &n, &m);
    for(int cnt = 0; cnt < m; cnt++) {
        int i,j,k;
        scanf("%d %d %d", &i, &j, &k);
        for(int tmp = i; tmp <= j; tmp++) {
            arr[tmp] = k;
        }
    }
    for(int i = 1; i <= n; i++) printf("%d ", arr[i]);
}