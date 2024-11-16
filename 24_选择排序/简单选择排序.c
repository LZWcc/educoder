#include <stdio.h>
#define N 100

int main ()
{
    /********** Begin **********/
    int a[N], n, i, j, min;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]) min = j;
        }
        if(min!=i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
        for(int k=0;k<n;k++) printf("%d ", a[k]);
        printf("\n");
    }
    /********** End **********/
    return 0;
}
