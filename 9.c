#include <stdio.h>

// 計算正整數被3整除之數值之總和
int main(){
    int n, answer = 0;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){ // 可被3整除
            answer += i;
        }
    }

    printf("%d\n", answer);
    return 0;
}