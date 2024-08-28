#include <stdio.h>
#include <string.h>

int main(int argc, char *argv ){
    char str[101];
    scanf("%s", str); // 길이 100 이하의 문자열 입력

    int i = 0;
    int len = strlen(str);
    // printf("len: %d\n", len);
    
    while(i*10 < len){
        char newStr[11] = "";
        strncpy(newStr, str+i*10, 10);
        printf("%s\n", newStr);
        i++;
    }
    
    return 0;
}