#include <stdio.h>
#include <string.h>

// 計算ASCII字元
int main(){
    int ASCII[128] = {0}, length, num;    
    //length of input string & 字符在 ASCII 中的編碼
    char input[1000];

    scanf("%s", input);
    length = strlen(input);

    for(int i = 0; i < length; i++){
        num = (int)input[i];
        ASCII[num]++;
    }

    for(int i = 127; i >= 0; i--){
        if(ASCII[i] != 0)
            printf("%d %d\n", i, ASCII[i]);
    }

    return 0;
}