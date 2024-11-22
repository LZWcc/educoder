#include <stdio.h>
#include <stdlib.h>
#define  M 10
#define  S 10
#define  N 10
int main()
{ 
    /********** Begin **********/ 
    int m,s,n;
    scanf("%d%d%d",&m,&s,&n);
    int a[m][s],b[s][n],c[m][n];
    for(int i=0;i<m;i++)for(int j=0;j<s;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<s;i++)for(int j=0;j<n;j++)scanf("%d",&b[i][j]);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++){
        c[i][j]=0;
        for(int k=0;k<s;k++)c[i][j]+=a[i][k]*b[k][j];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)printf("%d\t",c[i][j]);
        printf("\n");
    }
    /********** End **********/
    return 0;
}