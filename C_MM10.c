#include <stdio.h>  
  
// 攝氏溫度轉華氏溫度
int main(){  
    double c, f;    // 攝氏, 華氏
    scanf("%lf", &c);
    f = c*9/5 + 32;
    printf("%.1lf\n", f);
  
    return 0;  
}  