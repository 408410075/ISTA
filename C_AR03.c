#include <stdio.h>
#include <math.h>

// 計算陣列中所有元素的立方和 
int main() {   
    int input[6], sum = 0;

    for(int i = 0; i < 6; i++){
        scanf("%d", &input[i]);
        // sum += pow(input[i], 3);    // pow未定義
        sum += input[i]*input[i]*input[i];
    }

    printf("%d\n", sum);
    return 0;  
}  