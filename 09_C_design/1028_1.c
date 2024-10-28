//包含标准输入输出函数
#include <stdio.h>
//包含数学函数
#include <math.h>
#define PI 3.1415926
//定义main函数
int main()
{
    //请在此添加‘求指定表达式的值’的代码
    /*****************Begin******************/
    double upper = sqrt(5) + sqrt (3);
    double down  = fabs(-5 + sin(PI/4));
    double res = upper/down;
    printf("%lf",res);
    /***************** End ******************/
    return 0;
}
