#include <stdio.h>

int arr[201] = {0, };
int n, v;

int main(void) {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int tmp;
        scanf(" %d", &tmp);
        arr[tmp + 100]++;
    }
    scanf("%d", &v);
    printf("%d\n", arr[v + 100]);
}