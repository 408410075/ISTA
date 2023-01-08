#include <stdio.h>

// 季節判斷
int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        if(input >= 3 && input <= 5)
            printf("Spring\n");
        if(input >= 6 && input <= 8)
            printf("Summer\n");
        if(input >= 9 && input <= 11)
            printf("Autumn\n");
        if(input >= 12 || input <= 2)
            printf("Winter\n");
    }
    return 0;
}