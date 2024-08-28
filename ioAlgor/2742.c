#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // n부터 1까지 하나씩 한 줄마다 출력
    for(int i=n;i>0;i--){
        printf("%d\n", i);
    }
    return 0;
}