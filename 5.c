#include <stdio.h>

// 十進制轉二進制
int main(){  
    int input = 0, answer[8]; 

    scanf("%d", &input); 
    if(input < 0)   // 若為負數
        input += 256;

    for(int i = 7; i >= 0; i--){  
        answer[i]  = input % 2;  
        input /= 2;
    }

    for (int i = 0; i < 8; i++)
        printf("%d", answer[i]); 
    printf("\n");
    
    return 0;
} 