#include <stdio.h>

// 考試測驗
int main(){
    char result;
    int n, score[3], fail;  // fail: number of failing grades
    int sum;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        fail = 0;   sum = 0;    // initialize every time
        for(int j = 0; j < 3; j++){
            scanf("%d", &score[j]);
            sum += score[j];
            if(score[j] < 60)
                fail++;
        }

        // way 1, no failing
        if(fail == 0)
            result = 'P';
        // way 2, total score over 220
        else if(sum >= 220)
            result = 'P';
        // only one failing
        else if(fail == 1)
            result = 'M';
        // two failing, but another subject with a score higher than 80
        else if(fail == 2){
            for(int j = 0; j < 3; j++){
                if(score[j] >= 80){
                    result = 'M';
                    break;
                }
                else{
                    result = 'F';
                }
            }
        }
        else{
            result = 'F';
        }

        printf("%c\n", result);
    }

    return 0;
}