// 包含标准输入输出函数库
#include <stdio.h>

// 定义main函数
int main()
{
    // 定义变量，m-苹果数，n-人数，x-人均苹果数
    int m, n, x;
    // 请在Begin-End之间添加代码，计算人均苹果数
    /********** Begin *********/
	scanf("%d %d",&m,&n);
    x = m / n;
    /********** End **********/
    // 输出人均苹果数
    printf("人均苹果数为：%d",x);
    return 0;
}
