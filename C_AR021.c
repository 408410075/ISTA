#include <stdio.h>
#include <math.h>

int main(){
    int n;  // the number of students
    double chi_sum = 0, eng_sum = 0, math_sum = 0;  // grades
    
    scanf("%d", &n);
    double chi[n], eng[n], math[n];

    for(int i = 0; i < n; i++){
        scanf("%lf%lf%lf", &chi[i], &eng[i], &math[i]);
        chi_sum += chi[i];
        eng_sum += eng[i];
        math_sum += math[i];
    }

    printf("%.1lf %.1lf %.1lf %.1lf\n", 
    (floor(((chi_sum + eng_sum + math_sum) / (3*n) ) * 10 + 0.5)) / 10,     // 平均後四捨五入
    (floor((chi_sum / n) * 10 + 0.5)) / 10, 
    (floor((eng_sum / n) * 10 + 0.5)) / 10, 
    (floor((math_sum / n) * 10 + 0.5)) / 10);
}