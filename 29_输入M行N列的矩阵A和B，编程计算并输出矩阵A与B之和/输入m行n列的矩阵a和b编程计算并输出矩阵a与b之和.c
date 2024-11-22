#include <stdio.h>
#define M 10
#define N 10
int main()
{
    int a[M][N], b[M][N], sum[M][N];
    int i, j, m, n;
    scanf("%d%d", &m, &n);// 确定行列数
    /*********Begin*********/
    for(i = 0; i < m; i++)for(j = 0; j < n; j++)scanf("%d", &a[i][j]);// 输入矩阵A
    for(i = 0; i < m; i++)for(j = 0; j < n; j++)scanf("%d", &b[i][j]);// 输入矩阵B
    for(i = 0; i < m; i++)for(j = 0; j < n; j++)sum[i][j] = a[i][j] + b[i][j];// 计算矩阵A与B之和
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)printf("%d ", sum[i][j]);// 输出矩阵A与B之和
        printf("\n");
    }
    /*********End**********/
    return 0;
}