#include <stdio.h>
#define N 20
int main()
{
    /********** Begin *********/
    int n,m,a[N],b[N],t;
    scanf("%d",&n);
    // for(int i=0;i<n;i++)a[i]=b[i]=0;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++)scanf("%d",&b[i]);
    for(int i=0;i<N;i++){
        t = a[i];
        a[i] = b[i];
        b[i] = t;
    }
    for(int i=0;i<m;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<n;i++)printf("%d ",b[i]);
    printf("\n");
    /********** End **********/
    return 0;
}