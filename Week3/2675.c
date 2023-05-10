#include <stdio.h>
#include <string.h>


int main(void) {
    int T,N;
    int b;
    char a[20] = {0};
    scanf("%d\n", &T);
    for(int r=0; r<T; r++) {
        scanf("%d %s", &N, a);
        for(int i=0; i<strlen(a); i++) {
            for(int j=0; j<N; j++) {
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }


    return 0;
}