#include <stdio.h>
#include<stdlib.h>
#define N 100
int main ()
{ 
    /********** Begin **********/ 
    int n;
    scanf("%d", &n);
    int a[n+1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int x;
    scanf("%d", &x);
    for(int i=n-1;i>=0;i--){
        if(a[i]>x){
            a[i+1]=a[i];
        }
        else{
            a[i+1]=x;
            break;
        }
        if(i==0){
            a[0]=x;
        }
    }
    for (int i = 0; i <= n; i++) printf("%d ", a[i]);
    /********** End **********/
   return 0;
}
