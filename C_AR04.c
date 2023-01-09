#include <stdio.h>

// 邊緣偵測，印出邊緣
int main(){
    int N;  // the number of input data
    int n, m;

    while(scanf("%d",&N)!=EOF){
        for(int i = 0; i < N;i++){
            scanf("%d%d", &n, &m);
            int img[n][m];
            
            // input img
            for(int j = 0; j < n; j++){
                for(int k = 0; k < m; k++){
                    scanf("%d", &img[j][k]);
                }
            }

            // detect the border
            for(int j = 0; j < n; j++){
                for(int k = 0; k < m; k++){
                    if(img[j][k] == 0)
                        printf("_ ");
                    else{
                        if(j > 0 && img[j-1][k] == 0){
							printf("0 ");
						}	
                        else if(k > 0 && img[j][k-1] == 0){
                            printf("0 ");
                        }
                        else if(j < n-1 && img[j+1][k] == 0){
                            printf("0 ");
                        }
                        else if(k < m-1 && img[j][k+1] == 0){
                            printf("0 "); 
                        }
                        else {
                            printf("_ ");
                        }
                    }
                }
                printf("\n");
            }

            if(i < N-1){    // 最後一行沒有換行
                printf("\n");
            }
        }
    }

    return 0;
}