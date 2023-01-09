#include <stdio.h>
#include <math.h>

// 計算正方形面積
int main(){
    double side;
    double area;
    scanf("%lf", &side);
    area = side*side;
    printf("%.1lf\n", (floor(area * 10 + 0.5)) / 10);   // 四捨五入

    return 0;
}