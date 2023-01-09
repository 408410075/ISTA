#include <stdio.h>

// 最少派車數
int main(){
    int n;
    scanf("%d", &n);
    int s[n], d[n]; //departure time and time of return
    int driver[24] = {0};

    for(int i = 0; i < n; i++){
        scanf("%d%d", &s[i], &d[i]);
        for(int j = s[i]-1; j < d[i]-1; j++){
            driver[j]++;
        }
    }

    // see when the most drivers are needed and how much
    int max = 0;
    for(int i = 0; i < 24; i++){
        if(driver[i] > max)
            max = driver[i];
    }

    printf("%d\n", max);
    return 0;
}