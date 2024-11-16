#include<stdio.h>
#define N 15
int main()
{
    int high,i,x,low,mid,a[N]={4,9,14,16,17,19,28,33,42,51,64,75,84,91,100};	
    scanf("%d",&x);
    /********** Begin **********/
    low=0;
    high=N-1;
    while(high>=low){
        mid=(high+low)/2;
        printf("查找区间下界，上界，中间点[%d，%d，%d]\n",low,high,mid);
        if(a[mid]==x){
            printf("查找成功，%d的下标：%d\n",x,mid);
            break;
        }
        else if(a[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(high<low){
        printf("查找区间下界，上界[%d，%d]，查找失败",low,high);
    }
    /********** End **********/
    return 0;
}
