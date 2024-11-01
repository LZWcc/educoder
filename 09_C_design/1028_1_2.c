// 包含标准输入输出函数
#include <stdio.h>
// 包含数学函数
#include <math.h>
// 定义main函数
int main()
{
    // 定义第一个点的坐标（x1，y1）
    double x1, y1;
    // 定义第二个点的坐标（x2，y2）
    double x2, y2;
    // 请在此添加‘求两点间距离’的代码
    /*****************Begin******************/
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double res = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("%g", res);
    /***************** End ******************/
    return 0;
}
