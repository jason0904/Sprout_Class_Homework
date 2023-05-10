#include <stdio.h>
#include <string.h>
int main(void) {
    int a;
    int b[30] =  {0, };
    for(int i=0; i<28; i++) {
        scanf("%d", a);
        b[a-1] = 1;
    }

    for (int i=0; i<30; i++) {
        if(b[i] == 0) {
            printf("%d\n", i+1);
        }
    }
    return 0;
}