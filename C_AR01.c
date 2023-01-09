#include <stdio.h>
#include <string.h>

// 一維陣列反轉
int main(){
    char array[100];    // input array
    int length; // array length
    while(gets(array) != NULL){
        length = strlen(array);
        for(int i = length-1; i >= 0; i--){
            if(array[i] == ' '){
                for(int j = i+1; array[j] != ' ' && array[j] != 0;j++){
                    printf("%c", array[j]);
                }
                printf(" ");
            }
        }
        for(int i = 0; array[i] != ' '; i++){
            printf("%c", array[i]);
        }
        printf("\n");
    }
    return 0;
}
