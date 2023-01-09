#include <stdio.h>  
  
// 計算 2 的 i 次方值
int main(){  
    int n, sum = 1;
    scanf("%d", &n);
    if(n < 31){
        for(int i = 0; i < n;i++){  
            sum *= 2;
        }
        printf("%d\n",sum);  
    }  
    else  
        printf("Value of more than 31\n");  
  
    return 0;  
}  