#include <stdio.h>

// ISBN驗證
int main(){
    int sum = 0, coef = 10, num;
    char input;

    for(int i = 0; i < 10; i++){
        scanf("%c", &input);    // 會抓到\n
        getchar();  // 去掉\n

        if(input == 'X')
            num = 10;
        else
            num = (int)input - 48;
        
        sum += ( (coef--)*(num) );
    }
    if(sum % 11 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}