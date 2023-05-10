#include <stdio.h>
#include <string.h>
int main(void) {
    char A[15];
    int T = 0;
    scanf("%s", A);
    for(int i=0; i<strlen(A); i++) {
        if(A[i] >= 'A' && A[i] <= 'C') {
            T += 3;
        }
        else if(A[i] >= 'D' && A[i] <= 'F') {
            T += 4;
        }
        else if(A[i] >= 'G' && A[i] <= 'I') {
            T += 5;
        }
        else if(A[i] >= 'J' && A[i] <= 'L') {
            T += 6;
        }
        else if(A[i] >= 'M' && A[i] <= 'O') {
            T += 7;
        }
        else if(A[i] >= 'P' && A[i] <= 'S') {
            T += 8;
        }
        else if(A[i] >= 'T' && A[i] <= 'V') {
            T += 9;
        }
        else if(A[i] >= 'W' && A[i] <= 'Z') {
            T += 10;
        }
    }
    printf("%d", T);

    return 0;
}