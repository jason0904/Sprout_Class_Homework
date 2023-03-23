#include <stdio.h>


int main(void) {

    int n;
    int tmp = 1;
    int i = 0;
    scanf("%d", &n);
    while(n >= tmp) {
        n -= tmp;
        tmp++;
        if(i == 1) {
            i = 0;
        }
        else if(i == 0) {
            i = 1;
        }
    }
    if(i == 1) {
        printf("%d\n", 0);
    }
    else if(i == 0) {
        printf("%d\n", tmp-n);
    }

    return 0;
}