#include <stdio.h>
#include <string.h>

// 文字及字母出現次數
int main(){
    char input[1000];
    int answer[26]= {0}; // uppercase and lowercase
    int num, length, count = 1;
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
        // 以空格分開單字
        if(input[i] == ' ')
            count++;
    }
    printf("%d\n", count);

    for(int i = 0; i < 26; i++){
        if(answer[i] != 0)
            printf("%c : %d\n", (char)('a'+i), answer[i]);
    }

    return 0;
}