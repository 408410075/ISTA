#include <stdio.h>
#include <string.h>

// 迴文字串
int main(){
    int n;
    char s[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", s);
        for(int j = strlen(s)-1; j >= 0; j--){  // 反著印
            printf("%c", s[j]);
        }
        printf("\n");
    }

    return 0;
}