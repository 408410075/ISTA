#include <stdio.h>
#include <string.h>

// 子字串出現次數
int main(){
    char sub[128], s[512];
    int answer = 0, length, length_sub;

    scanf("%s", sub);
    scanf("%s", s);
    // 不能用gets，輸入有時候是用空格隔開

    length_sub = strlen(sub);
    length = strlen(s);

    for(int i = 0; i < length; i++){
        if(strncmp(s + i, sub, length_sub) == 0)    //從s中i的位置開始，檢查是否有sub，檢查sub的長度
            answer++;
    }

    printf("%d\n", answer);

    return 0;
}