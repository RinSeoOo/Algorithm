#include <stdio.h>

int main(int argc, char* argv){
    int n;
    scanf("%d", &n);

    // 1부터 n까지 한 줄에 숫자 하나씩 출력

    for(int i=0;i<n;i++){
        printf("%d\n", i+1);
    }
}