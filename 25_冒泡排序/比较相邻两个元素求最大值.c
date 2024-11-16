#include <stdio.h>
#include<stdlib.h>
#define N 100

int main ()
{
    /********** Begin **********/
    int a[N], n, i, j, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++){
        if(a[i] > a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for(int k=0;k<n;k++)printf("%d ",a[k]);
    /********** End **********/
    return 0;
}