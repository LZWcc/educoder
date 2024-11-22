/********** Begin **********/
#include <stdio.h>
#include <string.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int m, n,max;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    puts("原矩阵：");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)printf("%d ", a[i][j]);
        printf("\n");
    }
    for(int i = 0; i < m; i++){
        max = 0;
        for(int j = 0; j < n; j++){
            if(a[i][j] > a[i][max])max=j;
        }
        swap(&a[i][0], &a[i][max]);
    }
    puts("处理后：");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)printf("%d ", a[i][j]);
        printf("\n");
    }
}
/********** End **********/