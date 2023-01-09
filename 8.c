#include <stdio.h>

// 質數判別
int main(){
    int n, answer = 0;

    scanf("%d", &n);
    for(int i = 2; i < n; i++){
        if(n % i == 0){ // 可被整除
            answer = 1;
            break;
        }
    }

    if(answer == 1)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}