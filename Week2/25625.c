#include <stdio.h>

int main(){

    int x,y;
    scanf("%d %d", &x, &y);
    if(x > y) {
        printf("%d", x+y); //제2공학관 -> 서울대입구 -> 제2공학관의 경우
    }
    else {
        printf("%d", y-x); //서울대입구 -> 제2공학관 -> 서울대입구 -> 제2공학관 이런 경우
    }
    return 0;
}