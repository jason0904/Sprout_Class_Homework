//단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다.
//그리고 나서 모든 점수를 점수/M*100으로 고쳤다.
#include <stdio.h>

int main(void) {
    int N;
    int max = 0;
    float sum = 0;
    scanf("%d\n", &N);
    int score[N];
    for(int i=0; i<N; i++) {
        scanf("%d ", &score[i]);
        if(score[i] > max) {
            max = score[i];
        }
    }
    for(int i=0; i<N; i++) {
        sum = sum + (float)score[i] / max * 100;

    }
    printf("%f", sum/N);
    return 0;
}