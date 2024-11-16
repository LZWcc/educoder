#include<stdio.h>
#define N 10
int main()
{
    int i,x,t,a[10]={63,72,24,91,35,12,49,107,57,84};
    scanf("%d",&x);
    /********** Begin **********/
    for(i=0;i<10;i++){
        if(a[i]==x){
            printf("查找成功，%d的下标：%d",x,i);
            break;
        }
    }
    /********** End **********/
    return 0;
}