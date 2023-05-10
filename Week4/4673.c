//셀프 넘버는 1949년 인도 수학자 D.R. Kaprekar가 이름 붙였다.
//양의 정수 n에 대해서 d(n)을 n과 n의 각 자리수를 더하는 함수라고 정의하자.
//예를 들어, d(75) = 75+7+5 = 87이다.
#include <stdio.h>
int selfnum(int n) {
    int num = n;
    while(n) {
        num = num + n % 10;
        n /= 10;

    }


    return num;
}


int main(void) {
    int arr[10001] = {};
    int check;

    for(int i = 1; i<=10000; i++) {
        check = selfnum(i);
        if(check <= 10000) {
            arr[check] = 1;
        }

        if(arr[i] != 1) {

            printf("%d\n", i);
        }

    }



    return 0 ;
}