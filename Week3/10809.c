#include <stdio.h>

int main(void){
    char a[100] = {0};
    scanf("%s", a);
    for(int i = 'a'; i <= 'z'; i++) {
        int j = 0;
        while(a[j] != 0) {
            if(a[j] == (char)i) {
                break;
            }
            j++;
        }

        if(a[j] == (char)i) {

            printf("%d ", j);
        }
        else {
            printf("-1 ");
        }
    }

    return 0;
}