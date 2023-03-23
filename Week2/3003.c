#include <stdio.h>

int main(void) {
    int k = 1, q = 1, r = 2, v = 2, kn = 2, p = 8;
    int wk, wq, wr, wv, wkn, wp;
    scanf("%d %d %d %d %d %d", &wk, &wq, &wr, &wv, &wkn, &wp);
    printf("%d %d %d %d %d %d", k - wk, q - wq, r - wr, v - wv, kn - wkn, p - wp);
}