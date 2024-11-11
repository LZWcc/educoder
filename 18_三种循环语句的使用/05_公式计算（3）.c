/********** Begin **********/
#include<stdio.h>
int main(){
    int n;
    double sum=1;
    scanf("%d",&n);
    for(int i=1,k=1;i<=n;i++){
        k*=i;
        sum+=1.0/k;
    }
    printf("s = %f",sum);
}
/********** End **********/