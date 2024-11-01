#include <stdio.h>
// 定义main函数
#define M(x, y) if(x < y){float t = y; y = x; x = t;}

int main()
{
    // 定义三个数
    float a, b, c;
    // 请在此添加‘输入三个数，按由大到小顺序输出这三个数’的代码
    /*****************Begin******************/
    scanf("%f %f %f", &a, &b, &c);
    M(a, b);
    M(b, c);
    M(a, b);
    printf("%g %g %g", a, b, c);
    /***************** End ******************/
    return 0;
}
