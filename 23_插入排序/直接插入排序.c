#include <stdio.h>
#include<stdlib.h>
#define N 100
int main ()
{
    /********** Begin **********/
    int a[N],n, i, j, key;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        for (int k = 0; k < n; k++) printf("%d ", a[k]);
        printf("\n");
    }
    /********** End **********/
    return 0;
}

