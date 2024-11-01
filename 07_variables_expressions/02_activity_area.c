#include <stdio.h>
#define PI 3.14
int main()
{
    // 输入代码段
    float r;
    float s;
    scanf("%f", &r);
    s = (float)PI * r * r;
    printf("活动面积为：%g平方千米", s);
    return 0;
}
