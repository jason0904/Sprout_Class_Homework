#include <stdio.h>

int main(void) {
    long long int a,b;
    scanf("%lld %lld", &a, &b);
    if(a > b) {
        long long int tmp;
        tmp = a;
        a = b;
        b = tmp;
        //swap 구현
    }
    if(a == b) {
        printf("0\n");
    }
    else {
        printf("%lld\n", b - a - 1 );
        for(long long int i = a+1; i < b; i++) {
            printf("%lld ", i);
        }
    }
    return 0;
}