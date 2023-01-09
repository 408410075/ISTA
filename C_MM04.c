#include <stdio.h>

// 計算總和、乘積、差、商和餘數
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d+%d=%d\n",a, b, a+b);
    printf("%d*%d=%d\n",a, b, a*b);
    printf("%d-%d=%d\n",a, b, a-b);
    if(a % b < 0)   // 餘數為負時 a%b 會錯
        printf("%d/%d=%d...%d\n",a, b, a/b-1, (a%b) + b);
    else
        printf("%d/%d=%d...%d\n",a, b, a/b, a%b);
}