/********** Begin **********/
#include<stdio.h>
int main(){
    int n;
    double s=0;
    scanf("%d",&n);
    for(int i=1,sum=0;i<=n;i++){
        sum+=i;
        s+=1.0/sum;
    }
    printf("s = %f",s);
}
/********** End **********/