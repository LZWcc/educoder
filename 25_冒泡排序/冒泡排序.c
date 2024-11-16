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
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        for(int k=0;k<n;k++)printf("%d ",a[k]);
        printf("\n");
    }
    /********** End **********/
    return 0;
}