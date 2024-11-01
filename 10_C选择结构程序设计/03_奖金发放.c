// 包含标准输入输出函数
#include <stdio.h>
// 定义main函数
int main()
{
    // 请在此添加‘奖金发放’的代码,预期格式如下，可改动。
    /*****************Begin******************/
    double I;
    scanf("%lf", &I);
    double W;
    int c;
    if (I < 100000)
        c = 0;
    else if (I < 200000)
        c = 1;
    else if (I < 400000)
        c = 2;
    else if (I < 600000)
        c = 3;
    else if (I < 1000000)
        c = 4;
    else
        c = 5;
    switch (c)
    {
    case 0:
        W = I * 0.1;
        break;
    case 1:
        W = (I - 100000) * 0.075 + 10000;
        break;
    case 2:
        W = (I - 200000) * 0.05 + 17500;
        break;
    case 3:
        W = (I - 400000) * 0.03 + 27500;
        break;
    case 4:
        W = (I - 600000) * 0.015 + 33500;
        break;
    default:
        W = (I - 1000000) * 0.01 + 39500;
        break;
    }
    printf("%.2f", W);
    /***************** End ******************/
    return 0;
}
