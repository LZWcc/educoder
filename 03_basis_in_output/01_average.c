#include <stdio.h>
// 定义main函数
int main()
{
    // 请在此添加‘求平均数’的代码
    float a, b, c, d, e;
    scanf("%f,%f,%f,%f,%f", &a, &b, &c, &d, &e);
    float result = (a + b + c + d + e) / 5;
    printf("%.2f\n", result);
    return 0;
}
