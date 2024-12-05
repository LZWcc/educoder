#include <stdio.h>
int main()
{
    /********** Begin **********/
    int n,sum;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0)sum+=j;
        }
        if(sum==i){
            printf("%d=1",i);
            for(int j=2;j<=i/2;j++){
                if(i%j==0)printf("+%d",j);
            }
            printf("\n");
        }
    }
    /********** End **********/
    return 0;
}
