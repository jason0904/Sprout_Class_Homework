#include <stdio.h>
// 검 짝수 화 홀수
int main(void) {
    int n;
    int ch;
    int arr[100001];
    int cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int tmp;
            scanf("%d", &tmp);
            if (tmp == 2) {
                if((i + j) % 2 == 0) {
                    ch = 1;
                }
                else if((i + j) % 2 == 1) {
                    ch = 0;
                }

            }
            else if (tmp == 1) {
                if((i + j) % 2 == 0) {
                    arr[cnt] = 1;
                    cnt++;
                }
                else if((i + j) % 2 == 1) {
                    arr[cnt] = 0;
                    cnt++;
                }
            }
        }
    }
    for(int i = 0; i < cnt; i++) {
        if(arr[i] == ch) {
             printf("Kiriya");
            return 0;
        }
    }
    printf("Lena");
    return 0;
}