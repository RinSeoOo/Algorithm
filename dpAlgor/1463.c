#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    int num[x+1];
    int cnt = 0;

    while(x != 1){
        if(x%3 == 0) {
            x /= 3;
            cnt++;
        }
        else if(x%2 == 0) {
            x /= 2;
            cnt++;
        }
        else {
            while(x%3 != 0 || x%2 != 0) {
                x--;
                cnt++;
            }
        }
        printf("%d -> ", x);
    }

    printf("\n%d", cnt);
    // printf("%d", cnt);

    return 0;
}