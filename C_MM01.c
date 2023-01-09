#include <stdio.h>

// 計算梯型面積
int main(){
    double upper, botton, height;
    double area;
    scanf("%lf%lf%lf", &upper, &botton, &height);

    area = (upper+botton)*height/2;
    printf("Trapezoid area:%.1lf\n", area);
}