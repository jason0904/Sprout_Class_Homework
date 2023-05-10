#include <stdio.h>

int main(void) {
    int rest[42] = {0,};
    int ans = 0;
    for(int i = 0; i<10; i++ ) {
        int a;
        scanf("%d\n", &a);
        int b = a%42;
        ++rest[b];
    }
    for(int i = 0; i<42; i++) {
        if(rest[i] > 0) {
            ++ans;
        }
    }
    printf("%d", ans);
    return 0;
}