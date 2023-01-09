#include <stdio.h>
 
 // 複數運算
int main(){
    int n;
    int a1, a2, b1, b2;
    char op;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        // getchar();  // 消除/n，%c前面加空格也可以
        // getchar judge不會過
        scanf(" %c%d%d%d%d", &op, &a1, &a2, &b1, &b2);

        if(op == '-'){
            printf("%d %d\n", a1 - b1, a2 - b2);
        }
        if(op == '+'){
            printf("%d %d\n", a1 + b1, a2 + b2);
        }
        if(op == '*'){
            printf("%d %d\n", a1*b1 - a2*b2, a2*b1 + a1*b2);
        }
    }

    return 0;
     
}