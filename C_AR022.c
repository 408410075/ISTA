#include <stdio.h>
#include <string.h>

// 字母出現的頻率
int main(){
    char input[1000];
    int answer[26]= {0};
    int num, length;    
    // length of input string
    // num: the position of the character in the array

    gets(input);
    length = strlen(input);

    for(int i = 0; i < length; i++){
        // for A ~ Z
        if(input[i] >= 'A' && input[i] <= 'Z'){
            num = (int)input[i] - 'A';
            answer[num]++;
        }
        // for a ~ z
        if(input[i] >= 'a' && input[i] <= 'z'){
            num = (int)input[i] - 'a';
            answer[num]++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(i == 25) // 最後沒有空格
            printf("%d", answer[i]);
        else
            printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}