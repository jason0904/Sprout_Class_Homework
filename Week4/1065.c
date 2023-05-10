//어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
//등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때,
//1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int hannum (int N) {
    int a = N;
    int sum;
    if(a<100) {
        sum = 1;
    }
    else {
        int A, B, C;
        int b = a/10;
        A = a%10;
        B = b%10;
        C = b/10;
        if(C-B == B-A) {
            sum = 1;
        }
        else {
            sum = 0;
        }

    }

    return sum;
}
int main(void) {
    int N;
    int result = 0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        result = result + hannum(i);
    }
    printf("%d", result);



    return 0;
}
