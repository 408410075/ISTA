#include <stdio.h>
#include <string.h>

// 判斷是否為迴文
int main(){
    char s[100], s_copy[100];
    int length, counter = 0, temp;

    scanf("%s", s);
    length = strlen(s);
    for(int i = length-1; i >= 0; i--)  // copy original string
        s_copy[counter++] = s[i];

    for(int i = 0; i < length; i++){   // check if they're same
        if(s[i] != s_copy[i]){
            printf("NO\n");
            return 0;;
        }
    }
    printf("YES\n");
    // 相同則為迴文

    return 0;
}