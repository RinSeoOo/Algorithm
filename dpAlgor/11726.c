#include <stdio.h>

int fib(int a){
    if(a == 0 || a == 1) return 1;
    else{
        return fib(a-2) + fib(a-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    // 피보나치 수열의 예제
    long long int ans[1010] = {};
    ans[0] = 1;
    ans[1] = 1;
    for(int i=2;i<=n;i++){
        ans[i] = ans[i-2] + ans[i-1];
        ans[i] %= 10007;
    }
    // int ans = fib(n) % 10007;

    // int answer = ans[n] % 10007;
    printf("%lld", ans[n]);

    return 0;
}