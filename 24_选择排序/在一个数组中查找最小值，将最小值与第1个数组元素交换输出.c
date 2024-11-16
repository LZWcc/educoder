#include <stdio.h>
#define N 100

int main ()
{
    /********** Begin **********/
    int a[N], n, i, j, min;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = 0;
    for(j=1;j<n;j++){
        if(a[j]<a[min]) min = j;
    }
    if(min!=i){
        int temp = a[0];
        a[0] = a[min];
        a[min] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    /********** End **********/
    return 0;
}
