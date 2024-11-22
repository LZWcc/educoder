#include <stdio.h>
#define   N   10
int main()
{  
    int i, a[N]={-5,4,9,15,28,45,66,89,100,180 }, k=-1, m;
    int low=0, high=N-1, mid;

    for(i=0;i<N;i++)  
        printf("%d ", a[i]);
    printf("\n");
    
    scanf("%d",&m);
    while(low <= high)
    {  
        mid = (low + high) / 2;
        if(m < a[mid])
            high = mid-1;
            
        /***** 以下一行有错误 *****/
        else if(m > a[mid])     low=mid+1;
        
        
        /***** 以下一行有错误 *****/
        else  {k=mid;break;}   
    }
    
    if(k>=0)  
        printf("m=%d,index=%d\n",m,k);
    else      
        printf("Not be found!\n");
    
    return 0;
}
