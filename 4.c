#include <stdio.h>

// 停車費計算
int main(){
    int start_hour, start_min, end_hour, end_min, total_time;
    int sum = 0;

    scanf("%d%d%d%d", &start_hour, &start_min, &end_hour, &end_min);
    total_time = (end_hour - start_hour) * 60 + end_min - start_min;
    if(total_time <= 120){
        sum += (total_time/30)*30;
    }
    if( total_time > 120 && total_time <= 240){
        sum += 120; // 2hr以內的錢
        sum += ( (total_time-120)/30 )*40;
    }
    if( total_time > 240){
        sum += 280; // 2hr以內的錢 + 4hr以內的錢
        sum += ( (total_time-240)/30 )*60;
    }

    printf("%d\n", sum);
    return 0;
}