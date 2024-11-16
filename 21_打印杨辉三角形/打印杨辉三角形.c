#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],i,j,n;
    scanf("%d",&n);  //输入打印行数
    /*********Begin*********/
    for(i=0;i<n;i++)a[i][0]=1,a[i][i]=1;
    for(i=1;i<n;i++)
        for(j=1;j<i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++)printf("%d\t",a[i][j]);
        printf("\n");
    }
    /*********End**********/ 
    return 0;
}