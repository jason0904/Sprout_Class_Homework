#include <stdio.h>

int main(void) {
    int cnt;
    scanf("%d", &cnt);

    for(int i=1; i<=cnt; i++) {
        for(int j=0; j<cnt-i; j++) {
            printf(" ");
        }
        for(int r=0; r<i; r++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}