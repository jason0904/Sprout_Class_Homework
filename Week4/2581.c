int primenum(int a) {
    if(a == 1) {
        return 0;
    }
    for(int i=2; i<a; i++) {
        if(a%i == 0) {
            return 0;
        }

    }
    return 1;
}
int main(void) {
    int M ,N;
    int sum = 0;
    int min = 10001;
    scanf("%d", &M);
    scanf("%d", &N);
    for(int i = M; i<=N; i++) {
        if(primenum(i) == 1) {
            sum += i;
        }
        if(primenum(i) == 1 && min > i) {
            min = i;
        }
    }
    if(sum == 0) {
        printf("-1");
    }
    else {
        printf("%d\n", sum);
        printf("%d", min);
    }
    return 0;
}