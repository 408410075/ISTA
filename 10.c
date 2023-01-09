#include <stdio.h>

// 輾轉相除法
int main(){
	int n1, n2;
	scanf("%d%d",&n1,&n2);
	while(n1 != 0 && n2 != 0){
        if(n1 >= n2)
            n1 %= n2;
        else
            n2 %= n1;
    }

    // 直到一方為0時，另一方為答案
    if(n1 == 0)
        printf("%d\n",n2);
    else
        printf("%d\n",n1);
} 