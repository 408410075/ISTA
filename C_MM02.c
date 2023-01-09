#include <stdio.h>

// 計算三角形面積
int main(){
    double botton, height;
    double area;
    scanf("%lf%lf", &botton, &height);

    area = botton*height/2;
    printf("%.1lf\n", area);
}