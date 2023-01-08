#include <stdio.h>

// 英哩轉公里
int main(){
    double input;
    while(scanf("%lf", &input) != EOF){
        input = input*1.6;
        printf("%.1lf\n", input);   // 小數點後一位
    }
    return 0;
}